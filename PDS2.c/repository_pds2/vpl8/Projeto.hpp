#ifndef Proj_H
#define Proj_H
#define MAX_TAREFAS 100
#include "Tarefa.hpp"
#include <string>
class Projeto{

private:
    int _id;
    static int _prox_id;
    std::string _nome;
    std::string _descricao;
    int _dono_id; //(usar -1 quando não houver dono)
    Tarefa _tarefas[MAX_TAREFAS]; // (limite: MAX_TAREFAS)
    int _num_tarefas;

public:
    Projeto();
    Projeto(const std::string& nome, const std::string& descricao);
    static void reset_id() { _prox_id = 1; }
    //metodos getters

    int get_id() const;
    const std::string& get_nome() const;
    const std::string& get_descricao() const;
    int get_dono_id() const;
    const Tarefa* get_tarefas() const;
    int get_num_tarefas() const;

    //metodos setters

    void set_nome(const std::string&);
    void set_descricao(const std::string&);
    void set_dono_id(int);

    //manipulacao de tarefas

    bool adicionar_tarefa(const std::string& descricao, int& out_tarefa_id);
    bool atualizar_tarefa(int id_tarefa, const std::string& novo_status);
    bool remover_tarefa(int id_tarefa);
    const Tarefa* buscar_tarefa(int id_tarefa) const;
};




#endif