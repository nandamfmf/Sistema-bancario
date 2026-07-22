#include "contabancaria.h"
#include <iostream>
#include <string>

    Conta::Conta(){
        int num = Numero;
        double saldo = Saldo;
        Cliente dono = Titular;
    }

    void Conta::despositar(double Valor){
        Saldo += Valor;
    }

    void Conta::sacar(double Valor){
        Saldo -= Valor;
    }

    void Conta::transferir(double Valor, Conta &destino){
        if(Saldo >= Valor){
            destino.Saldo += Valor;
            Saldo -= Valor;
        }
        else{
            std::cout << "Saldo insuficiente";
        }
    }

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
