Tema: Polimorfismo (Sobrescrita de Métodos com virtual e override)

Exercício: Crie uma classe Funcionario com método trabalhar. Crie Gerente e Programador 
que herdam publicamente e sobrescrevem trabalhar. No main, teste todos os métodos.
 
#include <iostream>
using namespace std;

class Funcionario {
public:
    virtual void trabalhar() {
        cout << "Funcionario realizando tarefas gerais." << endl;
    }

    virtual ~Funcionario() {} 
};

class Gerente : public Funcionario {
public:
    void trabalhar() override {
        cout << "Gerente coordenando a equipe e definindo metas." << endl;
    }
};

class Programador : public Funcionario {
public:
    void trabalhar() override {
        cout << "Programador desenvolvendo sistemas em C++." << endl;
    }
};

int main() {
    Funcionario* equipe[2];
    equipe[0] = new Gerente();
    equipe[1] = new Programador();

    for (int i = 0; i < 2; i++) {
        equipe[i]->trabalhar(); 
    }

    for (int i = 0; i < 2; i++) {
        delete equipe[i];
    }

    return 0;
}