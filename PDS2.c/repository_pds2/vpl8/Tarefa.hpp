#ifndef Tarefa_h
#define Tarefa_h
#include <string>
class Tarefa{

private:
    int _id;
    static int _prox_id;
    std::string _descricao;
    std::string _status;//valor padrao aberta

public:
    Tarefa();
    Tarefa(const std:: string& descricao);
    //metodos getters
    static void reset_id() { _prox_id = 1; }
    int get_id() const;
    const std::string& get_descricao() const;
    const std::string& get_status() const;
    //metodos setters
    void set_descricao(const std::string&);
    void set_status(const std::string&);







};


#endif