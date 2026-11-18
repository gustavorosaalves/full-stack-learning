Tema: Pilhas com STL (std::deque operando como Pilha / Undo)

Exercício: Desenvolva uma calculadora que registra todas as operações realizadas pelo 
usuário. Cada operação (como "+5", "x2") deve ser armazenada em uma pilha utilizando std::deque, 
de forma que seja possível desfazer as operações na ordem inversa em que foram realizadas 
(última operação é a primeira a ser desfeita).

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> historicoOperacoes;

    historicoOperacoes.push_back("+ 10");
    historicoOperacoes.push_back("x 2");
    historicoOperacoes.push_back("- 5");

    cout << "Operacoes registradas: " << historicoOperacoes.size() << endl;

    while (!historicoOperacoes.empty()) {
        cout << "Desfazendo ultima operacao: " << historicoOperacoes.back() << endl;
        historicoOperacoes.pop_back();
    }

    cout << "Historico limpo!" << endl;
    return 0;
}