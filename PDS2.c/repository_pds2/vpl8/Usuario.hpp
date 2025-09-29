#ifndef USUARIO_H
#define USUARIO_H
#include <string>
class Usuario{

    private:
        int _id;
        static int _prox_id;
        std::string _nome;
        std::string _email;


    public:

    Usuario();
    Usuario(std::string nome, std::string email);
    static void reset_id() { _prox_id = 1; }
    int get_id() const;
    const std::string& get_nome() const;
    const std::string& get_email() const;

    void set_nome(const std::string&);
    void set_email(const std::string&);


};
















#endif