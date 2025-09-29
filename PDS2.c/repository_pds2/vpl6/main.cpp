#include <iostream>
#include <string>
#include "FilaProcessos.hpp"
#include "avaliacao_basica_controle.hpp"


int main(){

    FilaProcessos fila;
    char comando;
    while(std::cin >> comando){

        if(comando == 'a'){
            std ::string str;
            int prioridade;
            std::cin>>str;
            std::cin>>prioridade;
            
            fila.adicionar_processo(str, prioridade);
        }else if(comando == 'r'){
            Processo* rm =fila.remover_processo_maior_prioridade();
            delete rm;
        }else if(comando == 'i'){
            int id;
            std::cin>>id;
            Processo* rm = fila.remover_processo_por_id(id);
            delete rm;
        }else if(comando == 'p'){
            fila.imprimir_fila();
        }else if(comando== 'e'){
            int id; 
            std::cin>>id;
            fila.estimativa_tempo_para_execucao(id);
        }else if(comando == 'b'){
            avaliacao_basica();
        }
    }
    return 0;
}