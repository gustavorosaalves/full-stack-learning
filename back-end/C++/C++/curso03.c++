#include <iostream>
using namespace std;

bool isPar (int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (isPar(numero) == true) {
        cout << "O número " << numero << " é par." << endl;
    } else if (isPar(numero) == false) {
        cout << "O número " << numero << " é ímpar." << endl;
    }

    return 0;
}
