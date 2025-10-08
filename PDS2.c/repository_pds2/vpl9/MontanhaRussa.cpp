#include "MontanhaRussa.hpp"
#include <algorithm>
#include <iomanip>

// Dica: Use a lista de inicialização do construtor para chamar o construtor da classe base (Brinquedo).
MontanhaRussa::MontanhaRussa(const std::string& cod, int ano, double kw, int cap, int loops)
    : Brinquedo(cod, ano, kw, cap), _loops(loops) {
}

std::string MontanhaRussa::tipo() const {
    return "MontanhaRussa";
    
}

void MontanhaRussa::imprimir_status() const {
    std::cout << std::fixed << std::setprecision(1) << this->codigo()<< " " << this->tipo()<< " " 
    << this->ano()<< " " << this->capacidade()<< " "<< this->potencia_kw()<< " ";

    if(this->pausado() == true){
        std::cout << "pausado"<<std::endl;
    }else{
        std::cout<< "ativo"<<std::endl;
    }

    std::cout<<" loops "<< _loops <<std:: endl;
}

void MontanhaRussa::operar_tick(int demanda, int& atendidos, double& receita, double& energia) {
    // Lógica principal da simulação do brinquedo:
    if(demanda < this->capacidade()){
        atendidos = demanda;
    }else{
        atendidos = this->capacidade();
    }
    receita += (12 + 0.25*this->_loops)*atendidos;
    if(atendidos>0){energia += 0.8*this->potencia_kw();}

}