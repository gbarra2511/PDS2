#include "RodaGigante.hpp"
#include <algorithm>
#include <iomanip>

RodaGigante::RodaGigante(const std::string& cod, int ano, double kw, int cap, int cabines)
    : Brinquedo(cod, ano, kw, cap), _cabines(cabines) {
}

std::string RodaGigante::tipo() const {
    return "RodaGigante";
}

void RodaGigante::imprimir_status() const {
    std::cout << std::fixed << std::setprecision(1) << this->codigo()<< " " << this->tipo()<< " " 
    << this->ano()<< " " << this->capacidade()<< " "<< this->potencia_kw()<< " ";

    if(this->pausado() == true){
        std::cout << "pausado"<<std::endl;
    }else{
        std::cout<< "ativo"<<std::endl;
    }

    std::cout<<" cabines "<< _cabines<<std:: endl;
}

void RodaGigante::operar_tick(int demanda, int& atendidos, double& receita, double& energia) {
    if(demanda < this->capacidade()){
        atendidos = demanda;
    }else{
        atendidos = this->capacidade();
    }
    
    receita =(8 + 0.5*this->_cabines)*atendidos;
    if(atendidos>0){energia += 0.5*this->potencia_kw();}
}