Tema: Containers STL (std::map - Chave e Valor)

Exercício: Construa um sistema simples de estoque usando std::map que relacione 
produtos ao seu estoque. Adicione produtos, atualize a quantidade de um produto e liste todos os 
produtos com suas quantidades.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> estoque;

    estoque["Teclado Mecanico"] = 15;
    estoque["Mouse Gamer"] = 30;
    estoque["Monitor 24pol"] = 8;

    estoque["Mouse Gamer"] -= 5; 
    estoque["Teclado Mecanico"] = 20; 

    cout << "--- Relatorio de Estoque ---" << endl;
    for (const auto& par : estoque) {
        cout << "Produto: " << par.first << " | Quantidade: " << par.second << " un." << endl;
    }

    return 0;
}