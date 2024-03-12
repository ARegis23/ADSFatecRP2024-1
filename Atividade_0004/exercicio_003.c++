// Escreva um programa que calcule a somatória dos N primeiros termos da seguinte série: S = (1^(2/2)) + (2^(3/4)) + 3^(4/8)... (obs: ^= potência)

#include <iostream>
#include <cmath> // Para usar a funções matemáticas

using namespace std;

int main() {

    cout << "-----------------------------------------" << endl;
    cout << " Somatorio das Potencias " << endl;
    cout << "-----------------------------------------" << endl;

    int N;
    cout << "Digite a quantia de termos que deseja saber a média: ";
    cin >> N;

    double soma = 0;

    for (int i = 1; i <= N; i++) {
        double termo = pow(i, (double)(i + 1) / (2 * i));
        soma += termo;
    }

    cout << "-----------------------------------------" << endl;
    cout << "A soma dos primeiros " << N << " termos da série é: " << soma << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}
