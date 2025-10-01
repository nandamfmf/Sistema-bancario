#include "contabancaria.h"
#include <iostream>
#include <string>

// Construtor da classe Conta, inicialliza os valores dos atributos.
    Conta::Conta(){
        int num = Numero;
        double saldo = Saldo;
        Cliente dono = Titular;
    }

// Simula um depósito em uma conta, adicionando o valor ao saldo atual.
    void Conta::despositar(double Valor){
        Saldo += Valor;
    }

// Simula um saque em uma conta, subtraindo-se o valor do saldo atual.
    void Conta::sacar(double Valor){
        Saldo -= Valor;
    }

// Simula uma transferência entre uma conta origem e uma conta destino, verificando se há saldo sufiiente.
    void Conta::transferir(double Valor, Conta &destino){
        if(Saldo >= Valor){
            destino.Saldo += Valor;
            Saldo -= Valor;
        }
        else{
            std::cout << "Saldo insuficiente";
        }
    }

// Simula uma transferência entre uma conta origem e duas contas de destino, verificando se há saldo sufiiente e dividindo o valor transferido igualmente para ambas.
    void Conta::transferir(double Valor, Conta &destino1, Conta &destino2){
        if(Saldo >= Valor){
            destino1.Saldo += Valor/2;
            destino2.Saldo += Valor/2;
            Saldo -= Valor;
        }
        else{
            std::cout << "Saldo insuficiente";
        }
    }
    void Conta::exibirSaldo(){
        std::cout << Saldo;
    }

    void Conta::exibirInfo(){
        std::cout << Titular.getNome() << ", " << Titular.getCPF();
        std::cout << Numero << ", " << Saldo;
    }