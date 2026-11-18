Tema: Classes, Objetos, Atributos e Métodos Estáticos (static)

Exercício: Crie uma classe Conversor com atributos valor e taxa. Adicione um método 
estático converter que recebe valor e taxa e retorna o valor convertido. No main, peça ao usuário 
o valor e a taxa, e mostre o valor convertido usando o método estático.

#include <iostream>
#include <iomanip>
using namespace std;

class Conversor {
public:
    double valor;
    double taxa;

    static double converter(double valor, double taxa) {
        return valor * taxa;
    }
};

int main() {
    Conversor conv;

    cout << "Digite o valor em dolares: US$ ";
    cin >> conv.valor;

    cout << "Digite a taxa de conversao: ";
    cin >> conv.taxa;

    double resultado = Conversor::converter(conv.valor, conv.taxa);

    cout << fixed << setprecision(2);
    cout << "Valor convertido: R$ " << resultado << endl;

    return 0;
}