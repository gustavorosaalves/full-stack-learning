Tema: Strings e Structs

Exercício 9: Leia os dados de 3 alunos (nome e nota) e exiba os que tiraram nota >= 7. 
Usar função getline e cin.ignore.
 
#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    double nota;
};

int main() {
    const int TOTAL = 3;
    Aluno turma[TOTAL];

    for (int i = 0; i < TOTAL; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        getline(cin, turma[i].nome);

        cout << "Digite a nota de " << turma[i].nome << ": ";
        cin >> turma[i].nota;
        cin.ignore(); 
    }

    cout << "\n--- Alunos Aprovados (Nota >= 7) ---" << endl;
    for (int i = 0; i < TOTAL; i++) {
        if (turma[i].nota >= 7.0) {
            cout << turma[i].nome << " - Nota: " << turma[i].nota << endl;
        }
    }

    return 0;
}