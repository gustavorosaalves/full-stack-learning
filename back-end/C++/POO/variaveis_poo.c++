
Tema: Variáveis, Constantes e Expressões

Exercício: Faça um programa que leia o valor do raio de um círculo (tipo float), 
utilize uma constante para armazenar o valor de pi e calcule a área do círculo. 
Apresente o resultado com duas casas decimais.
 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const float PI = 3.14159f;
    float raio;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    float area = PI * (raio * raio);

    cout << fixed << setprecision(2);
    cout << "A area do circulo e: " << area << endl;

    return 0;
}