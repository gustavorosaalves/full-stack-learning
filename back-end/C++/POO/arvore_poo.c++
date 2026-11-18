Tema: Estruturas de Dados (Árvore Binária de Busca - BST e Percursos Recursivos)

Exercício: Crie funções recursivas para percorrer uma BST em pré-ordem, 
em ordem e pós-ordem, mostrando a diferença entre as formas de visitação.

#include <iostream>
#include <memory>
using namespace std;

struct No {
    int valor;
    shared_ptr<No> esquerda;
    shared_ptr<No> direita;

    No(int v) : valor(v), esquerda(nullptr), direita(nullptr) {}
};

shared_ptr<No> inserir(shared_ptr<No> raiz, int valor) {
    if (!raiz) {
        return make_shared<No>(valor);
    }
    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    }
    return raiz;
}

void preOrdem(const shared_ptr<No>& raiz) {
    if (!raiz) return;
    cout << raiz->valor << " ";
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
}

void emOrdem(const shared_ptr<No>& raiz) {
    if (!raiz) return;
    emOrdem(raiz->esquerda);
    cout << raiz->valor << " ";
    emOrdem(raiz->direita);
}

void posOrdem(const shared_ptr<No>& raiz) {
    if (!raiz) return;
    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    cout << raiz->valor << " ";
}

int main() {
    shared_ptr<No> raiz = nullptr;
    int valores[] = {50, 30, 70, 20, 40, 60, 80};

    for (int v : valores) {
        raiz = inserir(raiz, v);
    }

    cout << "Pre-ordem: ";
    preOrdem(raiz);
    cout << endl;

    cout << "Em-ordem:  ";
    emOrdem(raiz);
    cout << endl;

    cout << "Pos-ordem: ";
    posOrdem(raiz);
    cout << endl;

    return 0;
}