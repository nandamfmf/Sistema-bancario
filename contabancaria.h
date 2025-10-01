#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>
#include "cliente.h"
using namespace std;

class Conta{
    private:
    int Numero;
    double Saldo;
    Cliente Titular;

    public:
    Conta();

    // Setters que definem os atributos privados da conta para serem utilizados.
    void setNumero(int numero){
        numero = Numero;
    };
    void setSaldo(double saldo){
        Saldo = saldo;;
    };
    void setTitular(Cliente titular){
        Titular = titular;
    };
    void despositar(double Valor);
    void sacar(double Valor);
    void transferir(double Valor, Conta &destino);
    void transferir(double Valor, Conta &destino1, Conta &destino2);
    void exibirSaldo();
    void exibirInfo();
};

#endif