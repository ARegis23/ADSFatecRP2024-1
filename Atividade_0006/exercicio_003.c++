#include <iostream>
#include <climits> // Para usar INT_MIN e INT_MAX
using namespace std;

int main() {
    const int TAMANHO = 10; 
    float temperaturas[TAMANHO];
    float soma = 0;
    float media;
    float maior = INT_MIN;
    float menor = INT_MAX;

    cout << "Digite as 10 temperaturas:" << endl;

    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Temperatura " << (i + 1) << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i]; // Adiciona a temperatura à soma
        if (temperaturas[i] > maior) {
            maior = temperaturas[i]; // Atualiza a maior temperatura, se necessário
        }
        if (temperaturas[i] < menor) {
            menor = temperaturas[i]; // Atualiza a menor temperatura, se necessário
        }
    }

    // Calcula a média das temperaturas
    media = soma / TAMANHO;

    // Imprime a média, a maior e a menor temperatura
    cout << "Média das temperaturas: " << media << endl;
    cout << "Maior temperatura: " << maior << endl;
    cout << "Menor temperatura: " << menor << endl;

    return 0;
}
