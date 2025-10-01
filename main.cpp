#include <iostream>
#include <string>
using namespace std;
#include "contabancaria.h"
#include "cliente.h"

int main(){
// Define três clientes diferentes. 
    Cliente cliente1;
    cliente1.setNome("Ana");
    cliente1.setCPF("123.330.789-10");

    Cliente cliente2;
    cliente2.setNome("Maria");
    cliente2.setCPF("109.896.233-81");

    Cliente cliente3;
    cliente3.setNome("Pedro");
    cliente3.setCPF("237.613.121-00");

// Cria três contas associadas aos clientes definidos acima.
    Conta conta1;
    conta1.setNumero(101);
    conta1.setSaldo(1000);
    conta1.setTitular(cliente1);

    Conta conta2;
    conta2.setNumero(102);
    conta2.setSaldo(2000);
    conta2.setTitular(cliente2);

    Conta conta3;
    conta3.setNumero(103);
    conta3.setSaldo(3000);
    conta3.setTitular(cliente3);

// Mostra as informações de cada conta, além de realizar as operações bancárias e mostrar os saldos atualizados.
    cout << "Conta 1 Info: ";
    conta1.exibirInfo();
    cout << endl << "Conta 2 Info: ";
    conta2.exibirInfo();
    cout << endl << "Conta 3 Info: ";
    conta3.exibirInfo();
    cout << endl;

    cout << "Depositando 500 na Conta 1" << endl;
    conta1.despositar(500);
    cout << "Saldo Conta 1: ";
    conta1.exibirSaldo();
    cout << endl;

    cout << "Sacando 200 da Conta 2" << endl;
    conta2.sacar(200);
    cout << "Saldo Conta 2: ";
    conta2.exibirSaldo();
    cout << endl;

    cout << "Transferindo 300 da Conta 3 para Conta 1" << endl;
    conta3.transferir(300, conta1);
    cout << "Saldo Conta 3: ";
    conta3.exibirSaldo();
    cout << endl;
    cout << "Saldo Conta 1: ";
    conta1.exibirSaldo();
    cout << endl;

    cout << "Transferindo 400 da Conta 1 para Conta 2 e Conta 3" << endl;
    conta1.transferir(400, conta2, conta3);
    cout << "Saldo Conta 1: ";
    conta1.exibirSaldo();
    cout << endl;
    cout << "Saldo Conta 2: ";
    conta2.exibirSaldo();
    cout << endl;
    cout << "Saldo Conta 3: ";
    conta3.exibirSaldo();
    cout << endl;

    return 0;
}