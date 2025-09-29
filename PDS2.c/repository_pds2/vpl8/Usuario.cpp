#include "Usuario.hpp"
#include <iostream>
#include <string>

int Usuario:: _prox_id = 1;
Usuario::Usuario() : _id(_prox_id++), _nome(""), _email("") {

}
Usuario:: Usuario(std::string nome, std::string email) : _id(_prox_id++), _nome(nome), _email(email) {

}

int Usuario::get_id() const{
    return this->_id;
}
const std::string& Usuario::get_nome() const{
    return this->_nome;
}
const std::string& Usuario::get_email() const{
    return this->_email;
}
void Usuario::set_nome(const std::string& nome){
    this->_nome = nome;
}
void Usuario::set_email(const std::string& email){
    this->_email = email;
}