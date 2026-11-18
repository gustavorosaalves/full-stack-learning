Tema: Estruturas Condicionais (switch-case)

Exercício: Desenvolva um programa que leia um código de operação (1 para soma, 
2 para subtração, 3 para multiplicação, 4 para divisão), leia dois números e execute a operação 
correspondente, exibindo o resultado. Caso o código seja inválido, exiba uma mensagem de erro.

#include <iostream>
using namespace std;

int main() {
    int codigo;
    double num1, num2;

    cout << "Escolha a operacao (1-Soma, 2-Subtracao, 3-Multiplicacao, 4-Divisao): ";
    cin >> codigo;

    if (codigo >= 1 && codigo <= 4) {
        cout << "Digite dois numeros: ";
        cin >> num1 >> num2;
    }

    switch (codigo) {
        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Erro: Divisao por zero!" << endl;
            }
            break;
        default:
            cout << "Codigo de operacao invalido!" << endl;
            break;
    }

    return 0;
}