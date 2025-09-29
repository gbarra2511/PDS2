#include "Projeto.hpp"
#include <iostream>
#include <string>
#include <vector>


int Projeto:: _prox_id = 1;

Projeto::Projeto() : _id(_prox_id++), _dono_id(-1), _num_tarefas(0){
    Tarefa::reset_id();
}
Projeto::Projeto(const std::string& nome, const std::string& descricao) : _id(_prox_id++), _nome(nome), _descricao(descricao), _dono_id(-1), _num_tarefas(0) {

}

//metodos getters

int Projeto::get_id() const{
    return this->_id;
}
const std::string& Projeto::get_nome() const{
    return this->_nome;
}
const std::string& Projeto::get_descricao() const{
    return this->_descricao;
}
int Projeto::get_dono_id() const{
    return this->_dono_id;
}
const Tarefa* Projeto::get_tarefas() const{
    return this->_tarefas;
}
int Projeto::get_num_tarefas() const{
    return this->_num_tarefas;
}

//metodos setters

void Projeto::set_nome(const std::string& nome){
    this->_nome = nome;
}
void Projeto::set_descricao(const std::string& descricao){
    this->_descricao = descricao;
}
void Projeto::set_dono_id(int id){
    this->_dono_id = id;
}

//manipulacao de tarefas

bool Projeto::adicionar_tarefa(const std::string& descricao, int& out_tarefa_id){
    if (_num_tarefas == 0) {
        Tarefa::reset_id();  
    }
    _tarefas[_num_tarefas] = Tarefa(descricao);
    out_tarefa_id = _tarefas[_num_tarefas].get_id();
    _num_tarefas++;
    return true;
}
bool Projeto::atualizar_tarefa(int id_tarefa, const std::string& novo_status){
    for (int i = 0; i < _num_tarefas; i++)
    {
        if(_tarefas[i].get_id() == id_tarefa){
            _tarefas[i].set_status(novo_status);
            return true;
        }
    }
    return false;
    
}
bool Projeto::remover_tarefa(int id_tarefa){
    for (int i = 0; i < _num_tarefas; i++) {
        if (_tarefas[i].get_id() == id_tarefa) {
            for (int j = i; j < _num_tarefas - 1; j++) {
                _tarefas[j] = _tarefas[j + 1];
            }
            _num_tarefas--;
            return true;
        }
    }
    return false;
}
const Tarefa* Projeto::buscar_tarefa(int id_tarefa) const{
    for(int i = 0; i < _num_tarefas; i++){
        if (_tarefas[i].get_id() == id_tarefa){
            return &_tarefas[i];
        }
    }
    return nullptr;
}