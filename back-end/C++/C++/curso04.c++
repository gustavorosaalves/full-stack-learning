#include <iostream>
using namespace std;

float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);

int main() {

        int Num1, Num2;
        cout << "Digite o primeiro numero: ";
        cin >> Num1;

        cout << "Digite o segundo numero: ";
        cin >> Num2;

        cout << "*** Resultado das operacoes ***" << endl;
        cout << Num1 << " e " << Num2 << endl;
        cout << "Soma: " << Soma(Num1, Num2) << endl;
        cout << "Subtracao: " << Subtracao(Num1, Num2) << endl;
        cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << endl;
        cout << "Divisao: " << Divisao(Num1, Num2) << endl;

    return 0;
}

    float Soma(float num1, float num2) {
        return num1 + num2;
    }
float Subtracao(float num1, float num2) {
    return num1 - num2;
}
float Multiplicacao(float num1, float num2) {
    return num1 * num2;
}
float Divisao(float num1, float num2) {
    return num1 / num2;
}