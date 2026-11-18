Tema: Funções, Métodos em Struct e Passagem por Referência

Exercício: Crie uma struct ContaBancaria com titular e saldo. A struct deve ter um 
método para depósito. Leia os dados, deposite um valor usando uma função com passagem por 
referência e exiba o saldo final.
 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct ContaBancaria {
    string titular;
    double saldo;

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }
};

void realizarDeposito(ContaBancaria &conta, double valor) {
    conta.depositar(valor);
}

int main() {
    ContaBancaria conta;
    double valorDeposito;

    cout << "Nome do titular: ";
    getline(cin, conta.titular);

    cout << "Saldo inicial: R$ ";
    cin >> conta.saldo;

    cout << "Valor para deposito: R$ ";
    cin >> valorDeposito;

    realizarDeposito(conta, valorDeposito);

    cout << fixed << setprecision(2);
    cout << "\nTitular: " << conta.titular << endl;
    cout << "Saldo final: R$ " << conta.saldo << endl;

    return 0;
}