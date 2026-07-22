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

    void setCPF(string cpf){
        CPF = cpf;
    };
    void setNome(string nome){
        Nome = nome;
    };
};

#endif
