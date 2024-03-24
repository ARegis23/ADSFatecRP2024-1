#include <iostream>

using namespace std;

int main() {
    int numero, fatorial = 1;

    // Solicita ao usuário que digite o número
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verifica se o número é negativo
    if (numero < 0) {
        cout << "O fatorial não está definido para números negativos." << endl;
        return 1; // Termina o programa com código de erro
    }

    // Calcula o fatorial usando um loop while
    int contador = 1;
    while (contador <= numero) {
        fatorial *= contador; // Multiplica o fatorial pelo valor do contador
        contador++; // Incrementa o contador
    }

    // Exibe o resultado
    cout << "O fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}
