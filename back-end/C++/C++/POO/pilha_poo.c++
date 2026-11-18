Tema: Estruturas de Dados (Pilha / Stack com Ponteiros - LIFO)

Exercício: Crie uma caixa de entrada de mensagens urgentes, onde a última mensagem 
recebida deve ser lida primeiro. Cada nó da pilha representa uma mensagem identificada por um número. 
Insira 3 mensagens, leia a última mensagem, insira mais 2 mensagens e exiba a pilha a cada operação.

#include <iostream>
using namespace std;

struct NoMensagem {
    int id;
    NoMensagem* proximo;
};

class PilhaMensagens {
private:
    NoMensagem* topo = nullptr;

public:
    void push(int id) {
        NoMensagem* novo = new NoMensagem{id, topo};
        topo = novo;
        cout << "[+] Mensagem #" << id << " chegou." << endl;
    }

    void pop() {
        if (!topo) {
            cout << "Caixa de entrada vazia!" << endl;
            return;
        }
        NoMensagem* temp = topo;
        cout << "[-] Lendo mensagem urgente #" << temp->id << endl;
        topo = topo->proximo;
        delete temp;
    }

    void exibir() {
        cout << "Pilha atual (Topo -> Base): ";
        NoMensagem* atual = topo;
        while (atual) {
            cout << "[" << atual->id << "] ";
            atual = atual->proximo;
        }
        cout << "\n" << endl;
    }

    ~PilhaMensagens() {
        while (topo) {
            NoMensagem* temp = topo;
            topo = topo->proximo;
            delete temp;
        }
    }
};

int main() {
    PilhaMensagens caixa;

    caixa.push(101);
    caixa.push(102);
    caixa.push(103);
    caixa.exibir();

    caixa.pop();
    caixa.exibir();

    caixa.push(104);
    caixa.push(105);
    caixa.exibir();

    return 0;
}