#include "Parque.hpp"
#include <iostream>
#include <iomanip>

Parque::Parque() : _num_brinquedos(0), _energia_acum(0), _receita_acum(0), _atendidos_acum(0) {
    // Inicialize os contadores e acumuladores.    
}

Parque::~Parque() {
    // Passo CRÍTICO: Evitar vazamento de memória (memory leak).
    // Percorra o array _brinquedos e use 'delete' em cada ponteiro
    // que foi alocado com 'new' na main.
    for (int i = 0; i < _num_brinquedos; i++) {
        delete _brinquedos[i];
    }
    
}

Brinquedo* Parque::find_brinquedo(const std::string& cod) const {
    // função para encontrar um brinquedo, caso ele exista

    for (int i = 0; i < _num_brinquedos; i++)
    {
        if(cod == _brinquedos[i]->codigo()){
            return _brinquedos[i];
        }
    }

    std::cout<<"Brinquedo informado nao existe."<<std::endl;
    return nullptr;
    
}

void Parque::adicionar(Brinquedo* b) {
    // adicione o brinquedo e incremente o contador
    _brinquedos[_num_brinquedos] = b;
    _num_brinquedos++;
}

void Parque::definir_demanda(int d) {
    this->_demanda = d;
}

void Parque::pausar(const std::string& cod) {
    Brinquedo* c = find_brinquedo(cod);
    if(c == nullptr) return;
    if(c->pausado() == false){
        c->pausar();
    }else{
        std::cout<<"Brinquedo ja esta pausado."<<std::endl;
    }
    
}

void Parque::retomar(const std::string& cod) {
    Brinquedo* c = find_brinquedo(cod);
    if(c == nullptr) return;
    if(c->pausado() == true){
        c->retomar();
    }else{
        std::cout<<"Brinquedo ja esta em operacao."<<std::endl;
    }
}

void Parque::rodar(int T) {

    int faltantes;
    for (int j = 0; j < T; j++)
    {
        faltantes = _demanda;

        for (int i = 0; i < _num_brinquedos && faltantes > 0; ++i) {
            Brinquedo* brinq = _brinquedos[i];
            if (brinq->pausado()){
                continue;
            }
            int atendidos_t = 0;
            double receita_t = 0.0;
            double energia_t = 0.0;

            brinq->operar_tick(faltantes, atendidos_t, receita_t,energia_t);
            faltantes = faltantes - atendidos_t;
            _atendidos_acum += atendidos_t;
            _receita_acum += receita_t;
            _energia_acum += energia_t;
    }   }
}


void Parque::status(const std::string& cod) const {
    // imprimir um status de um brinquedo; é necessário chamar outra função aqui
    
    Brinquedo *brinq = find_brinquedo(cod);
    if(brinq != nullptr)
        brinq->imprimir_status();

}

void Parque::painel() const {
    // Use <iomanip> para imprimir os
    //total de energia consumida (2 casas decimais), total de receita gerada 
    //(2 casas decimais), total de pessoas atendidas (inteiro).
    std::cout<<std::fixed<< std::setprecision(2)<<_energia_acum<<" "<<_receita_acum<<" "<<_atendidos_acum<<std::endl; 
}