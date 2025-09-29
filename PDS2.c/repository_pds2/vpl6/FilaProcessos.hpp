#ifndef FILA_H
#define FILA_H
#include "Processo.hpp"
#include <string>

class FilaProcessos{
private:
    struct Node{

            Processo* _processo;
            Node* _next;
            Node* _prev;
        
    };
    Node* _tail;
    Node* _head;
    int _proximoid;

public:

    FilaProcessos();
    void adicionar_processo(std::string nome, int prioridade);
    Processo* remover_processo_maior_prioridade();
    Processo* remover_processo_por_id(int id);
    void estimativa_tempo_para_execucao(int id);
    void imprimir_fila();

};
#endif