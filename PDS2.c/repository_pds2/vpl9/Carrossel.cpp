#include "Carrossel.hpp"
#include <algorithm>
#include <iomanip>

Carrossel::Carrossel(const std::string& cod, int ano, double kw, int cap, int bichos)
    : Brinquedo(cod, ano, kw, cap), _bichos(bichos) {
//herança 
}

std::string Carrossel::tipo() const {
     return "Carrossel";
    
}

void Carrossel::imprimir_status() const {
    std::cout << std::fixed << std::setprecision(1) << this->codigo()<< " " << this->tipo()<< " " 
    << this->ano()<< " " << this->capacidade()<< " "<< this->potencia_kw()<< " ";

    if(this->pausado() == true){
        std::cout << "pausado"<<std::endl;
    }else{
        std::cout<< "ativo"<<std::endl;
    }

    std::cout<<" bichos "<< _bichos <<std:: endl;
}

void Carrossel::operar_tick(int demanda, int& atendidos, double& receita, double& energia) {
    
    if(demanda < this->capacidade()){
        atendidos = demanda;
    }else{
        atendidos = this->capacidade();
    }
    receita += (6 + 0.75*this->_bichos)*atendidos;
    if(atendidos>0){
        energia += 0.3*this->potencia_kw();
    }

}