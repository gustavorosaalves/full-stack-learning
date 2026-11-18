Tema: Smart Pointers (std::shared_ptr e contagem de referências)

Exercício: Inventário de itens): Crie Item com nome. No main, crie alguns 
shared_ptr<Item> (itens no jogo) e crie dois vetores representando inventários de dois jogadores; 
permita que ambos apontem para o mesmo item (compartilhamento). Remova um item do primeiro 
inventário e mostre use_count antes e depois.
 
#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

class Item {
public:
    string nome;
    Item(string nome) : nome(nome) {
        cout << "Item criado: " << nome << endl;
    }
    ~Item() {
        cout << "Item destruido da memoria: " << nome << endl;
    }
};

int main() {
    shared_ptr<Item> espada = make_shared<Item>("Espada Lendaria");
    shared_ptr<Item> escudo = make_shared<Item>("Escudo de Ferro");

    vector<shared_ptr<Item>> inventarioJogador1 = { espada, escudo };
    vector<shared_ptr<Item>> inventarioJogador2 = { espada }; 

    cout << "\nReferencia da espada antes de remover do Jogador 1: " 
         << espada.use_count() << " (main + inv1 + inv2)" << endl;

    inventarioJogador1.erase(inventarioJogador1.begin());

    cout << "Referencia da espada depois de remover do Jogador 1: " 
         << espada.use_count() << " (main + inv2)\n" << endl;

    return 0;
}