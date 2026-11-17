#include <iostream>
using namespace std;

int main() {
    
    double valor1, valor2, valor3;
    double media;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    cout << "Digite o segundo valor: ";
    cin >> valor2;
    cout << "Digite o terceiro valor: ";
    cin >> valor3;

    media = (valor1 + valor2 + valor3) / 3;

    cout << "A media eh: " << media << endl;

    return 0;
}