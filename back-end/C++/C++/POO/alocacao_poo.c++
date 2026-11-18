Tema: Alocação Dinâmica de Memória (new e delete[])

Exercício: Pesquisa de Satisfação: Você recebeu n avaliações (inteiros 0-100). 
Alocar dinamicamente um array (com uso de new e delete) para armazenar as notas, calcular média, 
encontrar maior e menor nota e seus índices.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Digite a quantidade de avaliacoes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Quantidade invalida!" << endl;
        return 1;
    }

    int* notas = new int[n];
    double soma = 0.0;

    for (int i = 0; i < n; i++) {
        cout << "Nota [" << i << "] (0-100): ";
        cin >> notas[i];
        soma += notas[i];
    }

    int maior = notas[0], idxMaior = 0;
    int menor = notas[0], idxMenor = 0;

    for (int i = 1; i < n; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
            idxMaior = i;
        }
        if (notas[i] < menor) {
            menor = notas[i];
            idxMenor = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nMedia das notas: " << (soma / n) << endl;
    cout << "Maior nota: " << maior << " (indice " << idxMaior << ")" << endl;
    cout << "Menor nota: " << menor << " (indice " << idxMenor << ")" << endl;

    delete[] notas;
    notas = nullptr;

    return 0;
}