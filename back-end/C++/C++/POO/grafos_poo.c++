Tema: Grafos (Lista de Adjacência e Busca em Largura - BFS)

Exercício: Imagine uma mensagem enviada em uma rede social. Use a Busca em 
Largura (BFS) para simular a ordem em que os usuários recebem a mensagem, partindo do usuário 0.

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class RedeSocial {
private:
    int numUsuarios;
    vector<vector<int>> adj;

public:
    RedeSocial(int n) : numUsuarios(n), adj(n) {}

    void adicionarConexao(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void espalharMensagemBFS(int origem) {
        vector<bool> visitado(numUsuarios, false);
        queue<int> fila;

        visitado[origem] = true;
        fila.push(origem);

        cout << "Ordem de recebimento da mensagem (BFS a partir do usuario " << origem << "): ";

        while (!fila.empty()) {
            int atual = fila.front();
            fila.pop();
            cout << "Usuario " << atual << " -> ";

            for (int amigo : adj[atual]) {
                if (!visitado[amigo]) {
                    visitado[amigo] = true;
                    fila.push(amigo);
                }
            }
        }
        cout << "Fim" << endl;
    }
};

int main() {
    RedeSocial rede(6);

    rede.adicionarConexao(0, 1);
    rede.adicionarConexao(0, 2);
    rede.adicionarConexao(1, 3);
    rede.adicionarConexao(1, 4);
    rede.adicionarConexao(2, 5);

    rede.espalharMensagemBFS(0);

    return 0;
}