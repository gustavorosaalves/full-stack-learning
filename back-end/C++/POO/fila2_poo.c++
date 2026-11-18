Tema: Filas e Filas de Dupla Ponta com STL (std::deque - push_front e push_back)

Exercício: Elabore um sistema que organize a fila de uma montanha-russa. 
Visitantes normais entram no final da fila (push_back) e visitantes VIP entram no início da fila 
(push_front). Use std::deque para organizar a fila e simule a chegada de três visitantes normais 
e dois VIPs. Mostre a fila antes e depois de embarcar dois visitantes.

#include <iostream>
#include <deque>
#include <string>
using namespace std;

void exibirFila(const deque<string>& fila) {
    for (const auto& pessoa : fila) {
        cout << "[" << pessoa << "] ";
    }
    cout << endl;
}

int main() {
    deque<string> filaMontanhaRussa;

    filaMontanhaRussa.push_back("Normal 1");
    filaMontanhaRussa.push_back("Normal 2");
    filaMontanhaRussa.push_back("Normal 3");

    filaMontanhaRussa.push_front("VIP 1");
    filaMontanhaRussa.push_front("VIP 2");

    cout << "Fila antes do embarque:" << endl;
    exibirFila(filaMontanhaRussa);

    cout << "\nEmbarcando: " << filaMontanhaRussa.front() << endl;
    filaMontanhaRussa.pop_front();

    cout << "Embarcando: " << filaMontanhaRussa.front() << endl;
    filaMontanhaRussa.pop_front();

    cout << "\nFila apos o embarque:" << endl;
    exibirFila(filaMontanhaRussa);

    return 0;
}