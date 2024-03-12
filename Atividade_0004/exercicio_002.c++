//Escreva um programa que calcule a média de N temperaturas, sendo que o usuário deverá digitar o valor da quantidade de temperaturas que será digitado

#include <iostream>

using namespace std;

int main() {

    cout << "-----------------------------------------" << endl;
    cout << " Como esta o tempo?! " << endl;
    cout << "-----------------------------------------" << endl;

    int quantidadeTemperaturas;
    cout << "Digite quantas temperaturas irá inserir: ";
    cin >> quantidadeTemperaturas;

    if (quantidadeTemperaturas <= 0) {
        cout << "Quantidade inválida de temperaturas." << endl;
        return 1;
    }

        float somaTemperaturas = 0;
        float temperatura;

        for (int i = 0; i < quantidadeTemperaturas; i++) {
            cout << "Digite a temperatura # " << i + 1 << ": ";
            cin >> temperatura;
            somaTemperaturas += temperatura;
        }

        float media = somaTemperaturas / quantidadeTemperaturas;

        cout << "-----------------------------------------" << endl;
        cout << "A média das temperaturas é: " << media << endl;
        cout << "-----------------------------------------" << endl;

return 0;
}
