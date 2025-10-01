#include <string>
#include "cliente.h"
using namespace std;

Cliente::Cliente(){
    string nome = Nome;
    string cpf = CPF;
};

// Getters que retornam os atributos privados da classe Cliente.
string Cliente::getCPF(){
    return CPF;
};

string Cliente::getNome(){
    return Nome;
};

