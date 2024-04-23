#include <iostream>
#include <cmath>
using namespace std;

// Função para calcular as raízes de uma função de segundo grau
void calcularRaizes(float a, float b, float c, float& x1, float& x2) {
    float delta = b * b - 4 * a * c;

    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    } else {
        // Se o delta for negativo, as raízes serão complexas
        cout << "As raizes sao complexas." << endl;
    }
}

int main() {
    float a, b, c, x1, x2;

    // Solicita os coeficientes ao usuário
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;

    // Chama a função para calcular as raízes
    calcularRaizes(a, b, c, x1, x2);

    // Exibe as raízes
    cout << "As raizes da funcao sao: " << x1 << " e " << x2 << endl;

    return 0;
}