Tema: Vetores Dinâmicos (std::vector)

Exercício: Escreva um programa que leia números reais em um vector<float> até que 
o usuário digite um valor negativo. Ao final, exiba a média dos valores lidos (desconsidere o negativo).
 
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<float> numeros;
    float valor, soma = 0.0f;

    cout << "Digite numeros reais (digite um negativo para encerrar):" << endl;
    while (true) {
        cin >> valor;
        if (valor < 0) break;
        numeros.push_back(valor);
        soma += valor;
    }

    if (!numeros.empty()) {
        cout << fixed << setprecision(2);
        cout << "Media dos valores lidos: " << (soma / numeros.size()) << endl;
    } else {
        cout << "Nenhum valor valido foi inserido." << endl;
    }

    return 0;
}