#include <iostream>
#include <cmath>
using namespace std;

// Função para calcular o delta
float calcularDelta(float A, float B, float C) {
    return B*B - 4*A*C;
}

// Função para calcular a primeira raiz
float calcularX1(float A, float B, float delta) {
    return (-B + sqrt(delta)) / (2 * A);
}

// Função para calcular a segunda raiz
float calcularX2(float A, float B, float delta) {
    return (-B - sqrt(delta)) / (2 * A);
}

// Função para calcular a coordenada x do vértice
float calcularVX(float A, float B) {
    return -B / (2 * A);
}

// Função para calcular a coordenada y do vértice
float calcularVY(float A, float B, float C, float VX) {
    return -(calcularDelta(A, B, C)) / (4 * A);
}

int main() {
    float A, B, C;
    
    // Solicita os valores de A, B e C
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;
    
    // Calcula o delta
    float delta = calcularDelta(A, B, C);
    
    // Calcula as raízes
    float x1 = calcularX1(A, B, delta);
    float x2 = calcularX2(A, B, delta);
    
    // Calcula os vértices
    float VX = calcularVX(A, B);
    float VY = calcularVY(A, B, C, VX);
    
    // Exibe os resultados
    cout << "Delta: " << delta << endl;
    cout << "Raiz 1 (X1): " << x1 << endl;
    cout << "Raiz 2 (X2): " << x2 << endl;
    cout << "Vértice (VX, VY): (" << VX << ", " << VY << ")" << endl;
    
    return 0;
}