#include<iostream>
#include <sstream>
#include <string>
#include "Sistema.hpp"



int main(){
 
    Sistema sistema;
    std::string linha;

    while(std::getline(std::cin, linha)){
        std:: stringstream ss(linha);
        std::string comando;
        ss >> comando;
        if(comando =="adicionar_usuario"){
            std::string nome;
            std::string email;
            ss>>nome;
            ss>>email;

            sistema.adicionar_usuario(nome, email);
        }else if (comando == "remover_usuario"){
            int id;
            ss>>id;
            sistema.remover_usuario(id);
        }else if(comando =="buscar_usuario"){
            int id;
            ss>>id;
            sistema.buscar_usuario(id);
        }else if(comando == "listar_usuarios"){
            sistema.listar_usuarios();
        }else if(comando =="adicionar_projeto"){
            std::string nome;
            std::string descricao;
            ss>>nome;
            ss>>descricao;
            sistema.adicionar_projeto(nome,descricao);
        }else if(comando =="remover_projeto"){
            int id;
            ss>>id;
            sistema.remover_projeto(id);
        }else if(comando == "buscar_projeto"){
            int id;
            ss>>id;
            sistema.buscar_projeto(id);
        }else if(comando =="listar_projetos"){
            sistema.listar_projetos();
        }else if(comando == "atribuir_dono"){
            int id_projeto;
            int id_dono;
            ss>>id_projeto;
            ss>>id_dono;
            sistema.atribuir_dono(id_projeto,id_dono);
        }else if(comando=="adicionar_tarefa"){
            int id;
            ss>>id;
            std::string descricao;
            ss>>descricao;
            sistema.adicionar_tarefa(id,descricao);

        }else if(comando =="atualizar_tarefa"){
            int proj;
            int tarefa;
            std::string status;
            ss>>proj;
            ss>>tarefa;
            ss>>status;
            sistema.atualizar_tarefa(proj,tarefa,status);        
        }else if(comando == "remover_tarefa"){
            int proj;
            int tarefa;
            ss>>proj;
            ss>>tarefa;
            sistema.remover_tarefa(proj,tarefa);
        }else if(comando == "listar_tarefas"){
            int proj;
            ss>>proj;
            sistema.listar_tarefas(proj);
        }





    
    }
    return 0;
}