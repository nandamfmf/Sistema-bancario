#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente{
    private:
    string Nome;
    string CPF;

    public:
    Cliente();
    string getCPF();
    string getNome();

    // Setters que definem os atributos privados como Nome e CPF para serem utilizados.
    void setCPF(string cpf){
        CPF = cpf;
    };
    void setNome(string nome){
        Nome = nome;
    };
};

#endif