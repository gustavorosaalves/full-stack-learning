Tema: Tabela Hash (Resolução de Colisões por Encadeamento / Chaining)

Exercício: Implemente uma tabela hash simples em C++ que usa listas encadeadas 
(chaining) para resolver colisões. Cada posição da tabela deve conter um vector<int> para 
armazenar os valores que caírem no mesmo índice. Insira alguns valores e mostre o conteúdo da tabela.

#include <iostream>
#include <vector>
using namespace std;

class TabelaHash {
private:
    int tamanho;
    vector<vector<int>> tabela;

    int funcaoHash(int chave) const {
        return chave % tamanho;
    }

public:
    TabelaHash(int tamanho) : tamanho(tamanho), tabela(tamanho) {}

    void inserir(int valor) {
        int indice = funcaoHash(valor);
        tabela[indice].push_back(valor);
    }

    void exibir() const {
        for (int i = 0; i < tamanho; i++) {
            cout << "Indice [" << i << "]: ";
            if (tabela[i].empty()) {
                cout << "(vazio)";
            } else {
                for (int val : tabela[i]) {
                    cout << val << " -> ";
                }
                cout << "NULL";
            }
            cout << endl;
        }
    }
};

int main() {
    TabelaHash hash(5);

    hash.inserir(10);
    hash.inserir(12);
    hash.inserir(22);
    hash.inserir(7);
    hash.inserir(14);
    hash.inserir(19);

    cout << "--- Conteudo da Tabela Hash ---" << endl;
    hash.exibir();

    return 0;
}