Tema: Encapsulamento (private, getters, setters e ponteiro this)

Exercício: Crie uma classe Funcionario com atributos privados nome, salario e 
departamento. Use getters e setters. Valide que salário não seja negativo. No main, leia e mostre os dados.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Funcionario {
private:
    string nome;
    double salario;
    string departamento;

public:
    void setNome(string nome) {
        this->nome = nome;
    }

    string getNome() {
        return this->nome;
    }

    void setSalario(double salario) {
        if (salario >= 0) {
            this->salario = salario;
        } else {
            cout << "Aviso: Salario invalido! Definido como 0.0." << endl;
            this->salario = 0.0;
        }
    }

    double getSalario() {
        return this->salario;
    }

    void setDepartamento(string departamento) {
        this->departamento = departamento;
    }

    string getDepartamento() {
        return this->departamento;
    }
};

int main() {
    Funcionario func;
    string nome, depto;
    double sal;

    cout << "Nome do funcionario: ";
    getline(cin, nome);
    func.setNome(nome);

    cout << "Departamento: ";
    getline(cin, depto);
    func.setDepartamento(depto);

    cout << "Salario: R$ ";
    cin >> sal;
    func.setSalario(sal);

    cout << fixed << setprecision(2);
    cout << "\n--- Dados do Funcionario ---" << endl;
    cout << "Nome: " << func.getNome() << endl;
    cout << "Departamento: " << func.getDepartamento() << endl;
    cout << "Salario: R$ " << func.getSalario() << endl;

    return 0;
}