#include <iostream>
using namespace std;

const int MAX = 10; // Definição da constante MAX

int main() {
    int vetor1[MAX]; // Vetor original
    int vetor2[MAX]; // Vetor cópia

    // Leitura dos elementos do vetor1
    cout << "Digite " << MAX << " números inteiros para preencher o vetor:" << endl;
    for (int i = 0; i < MAX; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> vetor1[i];
    }

    // Copiar os elementos de vetor1 para vetor2 invertidos
    for (int i = 0; i < MAX; ++i) {
        vetor2[i] = vetor1[MAX - 1 - i];
    }

    // Imprimir os vetores
    cout << "\nVetor original:" << endl;
    for (int i = 0; i < MAX; ++i) {
        cout << vetor1[i] << " ";
    }

    cout << "\n\nVetor cópia invertido:" << endl;
    for (int i = 0; i < MAX; ++i) {
        cout << vetor2[i] << " ";
    }

    cout << endl;

    return 0;
}