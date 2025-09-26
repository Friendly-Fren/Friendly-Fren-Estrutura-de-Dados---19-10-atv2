#include <iostream>
using namespace std;

int main() {
    float num1, num2, soma, sub, mult, div;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << sub << endl;
    cout << "Multiplicação: " << mult << endl;
    cout << "Divisão: " << div << endl;

    return 0;
}
