#include <iostream>
using namespace std;

// Função para inverter os valores
void inverterValores(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Solicita os dois valores ao usuário
    cout << "Digite o primeiro valor: ";
    cin >> num1;
    cout << "Digite o segundo valor: ";
    cin >> num2;

    // Exibe os valores antes da inversão
    cout << "Valores antes da inversão: " << num1 << " " << num2 << endl;

    // Chama a função para inverter os valores
    inverterValores(num1, num2);

    // Exibe os valores depois da inversão
    cout << "Valores depois da inversão: " << num1 << " " << num2 << endl;

    return 0;
}