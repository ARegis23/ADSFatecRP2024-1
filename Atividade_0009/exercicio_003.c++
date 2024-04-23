#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Solicita os três números inteiros
    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;
    cout << "Digite o terceiro número inteiro: ";
    cin >> c;

    // Ordena os números em ordem crescente
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Exibe os números em ordem
    cout << "Os números em ordem são: " << a << ", " << b << " e " << c << endl;

    return 0;
}