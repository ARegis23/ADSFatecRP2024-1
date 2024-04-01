#include <iostream>
using namespace std;

int main() {
    const int TAMANHO = 10;
    float temperaturas[TAMANHO];

    cout << "Digite as 10 temperaturas:" << endl;

    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Temperatura " << (i + 1) << ": ";
        cin >> temperaturas[i];
    }

    cout << "Temperaturas armazenadas:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        if (temperaturas[i] >= 20) {
            cout << "Temperatura " << (i + 1) << ": quente" << endl;
        } else {
            cout << "Temperatura " << (i + 1) << ": frio" << endl;
        }
    }

    return 0;
}
