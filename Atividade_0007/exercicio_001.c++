#include <iostream>
using namespace std;

const int MAX = 3; // Definindo a ordem da matriz como 3

// Função para carregar a matriz com temperaturas
void carregarMatriz(float matriz[MAX][MAX]) {
    cout << "Digite as temperaturas para preencher a matriz:" << endl;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            cout << "Temperatura [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Função para mostrar a matriz
void mostrarMatriz(float matriz[MAX][MAX]) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Função para calcular a somatória das temperaturas
float calcularSomatoria(float matriz[MAX][MAX]) {
    float soma = 0.0;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

// Função para calcular a média das temperaturas
float calcularMedia(float matriz[MAX][MAX]) {
    return calcularSomatoria(matriz) / (MAX * MAX);
}

// Função para calcular a maior e a menor temperatura
void calcularMaiorMenor(float matriz[MAX][MAX], float& maior, float& menor) {
    maior = matriz[0][0];
    menor = matriz[0][0];
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
}

// Função para calcular a maior temperatura da diagonal principal
float calcularMaiorDiagonalPrincipal(float matriz[MAX][MAX]) {
    float maior = matriz[0][0];
    for (int i = 1; i < MAX; ++i) {
        if (matriz[i][i] > maior) {
            maior = matriz[i][i];
        }
    }
    return maior;
}

// Função para calcular a média das temperaturas da diagonal secundária
float calcularMediaDiagonalSecundaria(float matriz[MAX][MAX]) {
    float soma = 0.0;
    for (int i = 0; i < MAX; ++i) {
        soma += matriz[i][MAX - 1 - i];
    }
    return soma / MAX;
}

// Função para calcular a diferença das temperaturas da diagonal principal com a diagonal secundária
float calcularDiferencaDiagonais(float matriz[MAX][MAX]) {
    float somaDiagonalPrincipal = 0.0;
    float somaDiagonalSecundaria = 0.0;
    for (int i = 0; i < MAX; ++i) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][MAX - 1 - i];
    }
    return somaDiagonalPrincipal - somaDiagonalSecundaria;
}

// Função para calcular a maior temperatura das linhas pares da matriz
float calcularMaiorLinhasPares(float matriz[MAX][MAX]) {
    float maior = matriz[0][0];
    for (int i = 1; i < MAX; i += 2) {
        for (int j = 0; j < MAX; ++j) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int main() {
    float matriz[MAX][MAX];
    int opcao;
    float maior, menor;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Carga da matriz" << endl;
        cout << "2. Mostrar matriz" << endl;
        cout << "3. Calcular somatória das temperaturas" << endl;
        cout << "4. Calcular média das temperaturas" << endl;
        cout << "5. Calcular maior e menor temperatura" << endl;
        cout << "6. Calcular maior temperatura da diagonal principal" << endl;
        cout << "7. Calcular média das temperaturas da diagonal secundária" << endl;
        cout << "8. Calcular diferença das temperaturas da diagonal principal e secundária" << endl;
        cout << "9. Calcular maior temperatura das linhas pares da matriz" << endl;
        cout << "10. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                carregarMatriz(matriz);
                break;
            case 2:
                mostrarMatriz(matriz);
                break;
            case 3:
                cout << "Somatória das temperaturas: " << calcularSomatoria(matriz) << endl;
                break;
            case 4:
                cout << "Média das temperaturas: " << calcularMedia(matriz) << endl;
                break;
            case 5:
                calcularMaiorMenor(matriz, maior, menor);
                cout << "Maior temperatura: " << maior << endl;
                cout << "Menor temperatura: " << menor << endl;
                break;
            case 6:
                cout << "Maior temperatura da diagonal principal: " << calcularMaiorDiagonalPrincipal(matriz) << endl;
                break;
            case 7:
                cout << "Média das temperaturas da diagonal secundária: " << calcularMediaDiagonalSecundaria(matriz) << endl;
                break;
            case 8:
                cout << "Diferença das temperaturas das diagonais: " << calcularDiferencaDiagonais(matriz) << endl;
                break;
            case 9:
                cout << "Maior temperatura das linhas pares: " << calcularMaiorLinhasPares(matriz) << endl;
                break;
            case 10:
                cout << "Encerrando o programa..." << endl;
                return 0;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
                break;
        }
    }

    return 0;
}