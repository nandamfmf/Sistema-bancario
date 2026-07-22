#include <string>
#include "cliente.h"
using namespace std;

Cliente::Cliente(){
    string nome = Nome;
    string cpf = CPF;
};

string Cliente::getCPF(){
    return CPF;
};

string Cliente::getNome(){
    return Nome;
};

