#include "Tarefa.hpp"
#include <iostream>
#include <string>

int Tarefa:: _prox_id = 1;
// inicializacoes padrao via construtores
Tarefa::Tarefa() : _id(_prox_id++), _descricao(""), _status("aberta"){

}

Tarefa::Tarefa(const std:: string& descricao) : _id(_prox_id++), _descricao(descricao), _status("aberta"){


}
    //metodos getters
int Tarefa::get_id() const{
    return this->_id;
}
const std::string& Tarefa::get_descricao() const{
    return this->_descricao;
}
const std::string& Tarefa::get_status() const{
    return this->_status;
}
    //metodos setters
void Tarefa::set_descricao(const std::string& descricao){
    this->_descricao = descricao;
}
void Tarefa::set_status(const std::string& status){
    this->_status = status;
}