#include <iostream>
using namespace std;

const int SIZE = 4;

// Função para carregar uma matriz de caracteres
void carregarMatriz(char matriz[][SIZE], const string& nomeMatriz) {
    cout << "Digite os elementos da matriz " << nomeMatriz << ":" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << nomeMatriz << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Função para encontrar elementos repetidos nas duas matrizes
void encontrarRepetidos(const char matriz1[][SIZE], const char matriz2[][SIZE]) {
    bool encontrouRepetidos = false;
    cout << "Elementos repetidos nas duas matrizes:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (matriz1[i][j] == matriz2[i][j]) {
                encontrouRepetidos = true;
                cout << "Posição [" << i << "][" << j << "]: " << matriz1[i][j] << endl;
            }
        }
    }
    if (!encontrouRepetidos) {
        cout << "Nenhum elemento repetido encontrado nas mesmas posições nas duas matrizes." << endl;
    }
}

int main() {
    char matriz1[SIZE][SIZE];
    char matriz2[SIZE][SIZE];

    // Carregar as duas matrizes
    carregarMatriz(matriz1, "matriz1");
    carregarMatriz(matriz2, "matriz2");

    // Encontrar elementos repetidos nas mesmas posições nas duas matrizes
    encontrarRepetidos(matriz1, matriz2);

    return 0;
}