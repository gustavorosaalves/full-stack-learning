Tema: Estruturas de Dados (Fila / Queue com Ponteiros - FIFO)

Exercício: Crie uma fila de atendimento em um banco com senhas numeradas. 
Adicione 6 clientes à fila e atenda todos, mas antes de atender o último cliente, adicione mais 
2 clientes à fila. Mostre a fila antes e depois de cada atendimento.

#include <iostream>
using namespace std;

struct NoCliente {
    int senha;
    NoCliente* proximo;
};

class FilaBanco {
private:
    NoCliente* inicio = nullptr;
    NoCliente* fim = nullptr;
    int tamanho = 0;

public:
    void enfileirar(int senha) {
        NoCliente* novo = new NoCliente{senha, nullptr};
        if (!fim) {
            inicio = fim = novo;
        } else {
            fim->proximo = novo;
            fim = novo;
        }
        tamanho++;
    }

    void desenfileirar() {
        if (!inicio) return;
        NoCliente* temp = inicio;
        cout << ">> Atendendo senha: " << temp->senha << endl;
        inicio = inicio->proximo;
        if (!inicio) fim = nullptr;
        delete temp;
        tamanho--;
    }

    int getTamanho() { return tamanho; }

    void exibir() {
        cout << "Fila: ";
        if (!inicio) cout << "(vazia)";
        NoCliente* atual = inicio;
        while (atual) {
            cout << atual->senha << " ";
            atual = atual->proximo;
        }
        cout << endl;
    }
};

int main() {
    FilaBanco fila;

    for (int i = 1; i <= 6; i++) {
        fila.enfileirar(i);
    }

    while (fila.getTamanho() > 1) {
        fila.exibir();
        fila.desenfileirar();
    }

    cout << "\nChegaram mais 2 clientes antes do ultimo ser atendido!" << endl;
    fila.enfileirar(7);
    fila.enfileirar(8);

    while (fila.getTamanho() > 0) {
        fila.exibir();
        fila.desenfileirar();
    }
    fila.exibir();

    return 0;
}