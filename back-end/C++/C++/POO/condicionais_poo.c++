Tema: Estruturas Condicionais (if / else)

Exercício: Desenvolva um programa que receba três números inteiros e informe se eles 
formam um triângulo válido segundo a regra: a soma de dois lados sempre deve ser maior que o terceiro.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite os tres lados do triangulo: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Os valores formam um triangulo valido." << endl;
    } else {
        cout << "Os valores NAO formam um triangulo valido." << endl;
    }

    return 0;
}