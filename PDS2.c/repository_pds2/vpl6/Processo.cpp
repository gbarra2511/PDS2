#include <iostream>
#include <string>
#include "Processo.hpp"


Processo:: Processo(int id, std::string nome, int prioridade){
        this->_id = id;
        this->_nome = nome;
        this->_prioridade = prioridade;
}

double Processo:: tempo_reservado_processo(){
    
    if(this->_prioridade == 0){
        return 0.5;
    }else if (this->_prioridade == 1){
        return 1.5;
    }else {
        return 3.0;
    }
}
std::string Processo::prioridadestr() {
   if (this->_prioridade == 0) {
        return "BAIXA"; 
    } else if (this->_prioridade == 1) {
        return "MEDIA"; 
    } else {
        return "ALTA";  
    }
}

void Processo :: imprimir_dados(){
    std:: cout << this->_id << " " << this->_nome<< " " << this->prioridadestr() << std ::endl;

}

int Processo:: getID(){
    return this->_id;
}
int Processo:: getPrioridade(){
    return this->_prioridade;
}
std::string Processo::getNome(){
    return this->_nome;
}