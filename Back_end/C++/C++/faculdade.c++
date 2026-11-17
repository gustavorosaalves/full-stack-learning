#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    float nota;

public:
    string getNome () {
        return this-> nome;
    }
        void setNome (string novoNome) {
            this-> nome = novoNome;
        }
            float getNota () {
                return this-> nota;
            }
                void setNota (float novaNota) {
                    this-> nota = novaNota;
                }
};
    int main () {
        Aluno aluno;

        string nome;
        float nota;

        cout << "Digite o nome do aluno: ";
        cin >> nome;
        cout << "Digite a nota do aluno: ";
        cin >> nota;

        aluno.setNome (nome);
        aluno.setNota (nota);

        cout << "Nome do aluno: " << aluno.getNome() << endl;
        cout << "Nota do aluno: " << aluno.getNota() << endl;

        return 0;
    }