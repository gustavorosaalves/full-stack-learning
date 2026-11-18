Tema: Métodos Construtores e Destrutores

Exercício: Crie uma classe Funcionario com atributos nome e salario. O construtor 
inicializa os atributos e define salário 0 se negativo. O destrutor exibe uma mensagem de despedida. 
No main, crie um funcionário e exiba os valores.
 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Funcionario {
private:
    string nome;
    double salario;

public:

    Funcionario(string nome, double salario) {
        this->nome = nome;
        if (salario < 0) {
            this->salario = 0.0;
        } else {
            this->salario = salario;
        }
    }

    ~Funcionario() {
        cout << "Objeto Funcionario (" << nome << ") encerrado." << endl;
    }

    void exibirDados() {
        cout << fixed << setprecision(2);
        cout << "Funcionario: " << nome << " | Salario: R$ " << salario << endl;
    }
};

int main() {
    Funcionario f1("Carlos Silva", 4500.00);
    f1.exibirDados();

    Funcionario f2("Joao Souza", -1200.00); 
    f2.exibirDados();

    return 0;
}