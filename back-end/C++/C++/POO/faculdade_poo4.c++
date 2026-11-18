Tema: Estruturas de Repetição (do-while e for)

Exercício: O programa deve permitir calcular a média de notas de uma turma. 
A cada execução, o usuário informa a quantidade de alunos. Depois, insere as notas e vê a média. 
O menu repete até que o usuário digite 0 para sair.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int qtdAlunos;

    do {
        cout << "Informe a quantidade de alunos (ou 0 para sair): ";
        cin >> qtdAlunos;

        if (qtdAlunos > 0) {
            double soma = 0.0, nota;

            for (int i = 1; i <= qtdAlunos; i++) {
                cout << "Digite a nota do aluno " << i << ": ";
                cin >> nota;
                soma += nota;
            }

            cout << fixed << setprecision(2);
            cout << "Media da turma: " << (soma / qtdAlunos) << endl;
        } else if (qtdAlunos < 0) {
            cout << "Quantidade invalida!" << endl;
        }

    } while (qtdAlunos != 0);

    cout << "Programa encerrado." << endl;
    return 0;
}