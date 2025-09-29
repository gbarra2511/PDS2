#ifndef PROCESSO_H
#define PROCESSO_H
#include <string>

class Processo{

private:

    int _id;
    int _prioridade;
    std::string _nome;
public:
    int getID();
    int getPrioridade();
    std:: string getNome();
    Processo(int id, std::string nome, int prioridade);
    double tempo_reservado_processo();
    void imprimir_dados();
    std:: string prioridadestr();


};













#endif