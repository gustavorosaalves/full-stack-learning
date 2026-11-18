Tema: Herança (Herança Pública e Multinível)

Exercício: Crie uma classe Dispositivo com método ligar. Crie a classe Telefone que 
herda publicamente de Dispositivo e adiciona método fazerChamada. Crie a classe Smartphone que herda 
publicamente de Telefone e adiciona método acessarInternet. No main, crie um smartphone e use todos 
os métodos herdados e próprios.
 
#include <iostream>
using namespace std;

class Dispositivo {
public:
    void ligar() {
        cout << "Dispositivo ligado." << endl;
    }
};

class Telefone : public Dispositivo {
public:
    void fazerChamada() {
        cout << "Realizando chamada telefonica..." << endl;
    }
};

class Smartphone : public Telefone {
public:
    void acessarInternet() {
        cout << "Conectando a internet via 5G/Wi-Fi..." << endl;
    }
};

int main() {
    Smartphone meuCelular;

    meuCelular.ligar();          
    meuCelular.fazerChamada();   
    meuCelular.acessarInternet(); 

    return 0;
}