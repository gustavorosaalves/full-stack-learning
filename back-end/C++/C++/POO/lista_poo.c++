Tema: Estruturas de Dados (Lista Duplamente Encadeada Circular)

Exercício: Crie uma playlist de músicas em C++. Cada música é representada por um nó 
da lista duplamente encadeada circular. A playlist deve permitir percorrer as músicas para frente e 
para trás de forma infinita. Crie 3 músicas na lista e percorra 5 músicas à frente e 5 músicas 
para trás, exibindo os nomes no console.

#include <iostream>
#include <string>
using namespace std;

struct NoMusica {
    string nome;
    NoMusica* proximo;
    NoMusica* anterior;

    NoMusica(string nome) : nome(nome), proximo(nullptr), anterior(nullptr) {}
};

class PlaylistCircular {
private:
    NoMusica* inicio = nullptr;

public:
    void adicionarMusica(string nome) {
        NoMusica* novo = new NoMusica(nome);
        if (!inicio) {
            inicio = novo;
            inicio->proximo = inicio;
            inicio->anterior = inicio;
        } else {
            NoMusica* ultimo = inicio->anterior;
            novo->proximo = inicio;
            novo->anterior = ultimo;
            ultimo->proximo = novo;
            inicio->anterior = novo;
        }
    }

    void navegar(int passosFrente, int passosTras) {
        if (!inicio) return;
        NoMusica* atual = inicio;

        cout << "--- Avancando " << passosFrente << " musicas ---" << endl;
        for (int i = 0; i < passosFrente; i++) {
            cout << "Tocando: " << atual->nome << endl;
            atual = atual->proximo;
        }

        cout << "\n--- Voltando " << passosTras << " musicas ---" << endl;
        for (int i = 0; i < passosTras; i++) {
            atual = atual->anterior;
            cout << "Tocando: " << atual->nome << endl;
        }
    }

    ~PlaylistCircular() {
        if (!inicio) return;
        NoMusica* atual = inicio->proximo;
        while (atual != inicio) {
            NoMusica* temp = atual;
            atual = atual->proximo;
            delete temp;
        }
        delete inicio;
    }
};

int main() {
    PlaylistCircular playlist;
    playlist.adicionarMusica("1. Bohemian Rhapsody");
    playlist.adicionarMusica("2. Hotel California");
    playlist.adicionarMusica("3. Stairway to Heaven");

    playlist.navegar(5, 5);

    return 0;
}