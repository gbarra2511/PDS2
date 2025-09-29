#include <iostream>
#include <vector>
#include "FilaProcessos.hpp"
#include <iomanip>


FilaProcessos::FilaProcessos(){
    this->_head = nullptr;
    this->_tail = nullptr;
    this->_proximoid = 1;

}
void FilaProcessos:: adicionar_processo(std::string nome, int prioridade){
    
    
    Processo* proaux = new Processo(this->_proximoid, nome, prioridade);
    this->_proximoid++;
    Node* novo = new Node();
    novo->_processo = proaux;
    novo->_next = nullptr;
    novo->_prev = nullptr;

    if(_head ==  nullptr){
        _tail = novo;
        _head = novo;
    // se a prioridade do novo for maior que a do head ele vira o novo head
    }else if(novo->_processo->getPrioridade()  >  _head->_processo->getPrioridade()){
        novo->_next = _head;
        _head->_prev = novo;
        _head = novo;
    }else {
        Node* cursor = _head;
        while(cursor->_next != nullptr && novo->_processo->getPrioridade() <= cursor->_next->_processo->getPrioridade() ){
            cursor = cursor->_next;
        }
        novo->_next = cursor->_next;
        novo->_prev = cursor;
        cursor->_next = novo;
        if(novo->_next != nullptr){
            novo->_next->_prev = novo;
        }
        if(novo->_next == nullptr){
            _tail = novo;
        }

    }   
}
Processo* FilaProcessos:: remover_processo_maior_prioridade(){
    
    if(_head == nullptr){
        return nullptr;
    }
    Processo* premover = _head->_processo;
    Node * noderemover = _head;
    _head = _head->_next;

    if(_head == nullptr){
        _tail = nullptr;
    }else{
        _head->_prev = nullptr;
    }
    delete noderemover;
    //return ponteiro processo removido, nao preciso desalocar memória
    return premover;
}
Processo* FilaProcessos::remover_processo_por_id(int id){

    if(_head == nullptr){
        return nullptr;
    }
    if(_head->_processo->getID() == id){
        return remover_processo_maior_prioridade();
    }

    Node* cursor = _head;

    while(cursor != nullptr && cursor->_processo->getID() != id){
        cursor = cursor->_next;
    }

    if(cursor == nullptr){
        return nullptr;
    }

    Processo* premover = cursor->_processo;
    cursor->_prev->_next =cursor->_next;

    if(cursor->_next != nullptr){
        cursor->_next->_prev = cursor->_prev;
    }else{
        _tail = cursor->_prev;
    }
    delete cursor;
    return premover;

}
void FilaProcessos::estimativa_tempo_para_execucao(int id){
     double tempo_total_espera = 0.0;
    Node* cursor = _head;

    
    while (cursor != nullptr) {
        if (cursor->_processo->getID() == id) {
            break; 
        }
       
        tempo_total_espera += cursor->_processo->tempo_reservado_processo();
        cursor = cursor->_next;
    }
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Tempo estimado para execução do processo "
              << cursor->_processo->getNome() << " (id="
              << cursor->_processo->getID() << ") eh "
              << tempo_total_espera << " segundos." << std::endl;
}
void FilaProcessos::imprimir_fila(){
    Node* cursor = _head;
    while(cursor != nullptr){
        cursor->_processo->imprimir_dados();
        cursor = cursor->_next;
    }


}