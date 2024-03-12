//Escreva um programa que leia x números (o usuário deve entrar com o valor de x) e, por meio do laço for, o programa retorne a somatória dos números pares digitados

//Bibliotecas
#include <iostream>

using namespace std;

//Entrada de Dados
int main() {
    int x;

    cout << "-----------------------------------------" << endl;
    cout << " Quem somos par !?" << endl;
    cout << "-----------------------------------------" << endl;

    cout << "Digite a quantidade de números que deseja verificar: ";
    cin >> x;

    int somaPares = 0;
    int numero;

    for (int i = 0; i < x; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            somaPares += numero;
        }
    }

    cout << "-----------------------------------------" << endl;
    cout << "A soma dos números pares digitados é: " << somaPares << endl;
    cout << "-----------------------------------------" << endl;

return 0;
}
