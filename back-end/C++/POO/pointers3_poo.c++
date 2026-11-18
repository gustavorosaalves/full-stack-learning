Tema: Smart Pointers (std::weak_ptr e Prevenção de Memory Leak Cíclico)

Exercício: Simule uma rede social onde cada usuário pode seguir outro usuário, 
e também pode ser seguido de volta. Para evitar ciclos de referência que causem vazamentos de memória, 
utilize shared_ptr para seguir e weak_ptr para ser seguido. Crie dois usuários que seguem um ao outro. 
Ao final, verifique que a memória é liberada automaticamente sem vazamento.

#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Usuario {
public:
    string nome;
    shared_ptr<Usuario> seguindo; 
    weak_ptr<Usuario> seguidor;  

    Usuario(string nome) : nome(nome) {
        cout << "Usuario " << nome << " entrou na rede." << endl;
    }

    ~Usuario() {
        cout << "Usuario " << nome << " removido da memoria (Destrutor chamado!)." << endl;
    }

    void mostrarConexoes() {
        cout << nome << " segue: " << (seguindo ? seguindo->nome : "ninguem");
        if (auto seg = seguidor.lock()) { 
            cout << " | E seguido por: " << seg->nome;
        }
        cout << endl;
    }
};

int main() {
    {
        shared_ptr<Usuario> alice = make_shared<Usuario>("Alice");
        shared_ptr<Usuario> bob = make_shared<Usuario>("Bob");

        alice->seguindo = bob;
        bob->seguidor = alice;

        bob->seguindo = alice;
        alice->seguidor = bob;

        cout << endl;
        alice->mostrarConexoes();
        bob->mostrarConexoes();
        cout << endl;
    } 

    cout << "Fim do programa: memoria totalmente liberada." << endl;
    return 0;
}