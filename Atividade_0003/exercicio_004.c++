//Escreva um programa que implemente uma calculadora de quatro operações usando switch case. O usuário deverá entrar com os valores dos operandos e da operação e o programa deverá fornecer o resultado

//Bibliotecas
#include <iostream>

using namespace std;

//Funcao
void calcular (char sinal, float A, float B){
    float Result = 0;
        switch (sinal){
            case '+':
                Result = A + B;
                cout << "-----------------------------------------" << endl;
                cout << Result << endl;
                cout << "-----------------------------------------" << endl;
                break;
            case '-':
                if (B > A){
                    Result = B - A;
                } else if (B < A){
                    Result  = A - B;
                    }
                    cout << "-----------------------------------------" << endl;
                    cout << Result << endl;
                    cout << "-----------------------------------------" << endl;
                break;
            case '*':
                Result = A * B;
                cout << "-----------------------------------------" << endl;
                cout << Result << endl;
                cout << "-----------------------------------------" << endl;
                break;         
            case '/':
                if (B == 0){
                    cout << "-----------------------------------------" << endl;
                    cout << "Erro - Divisão por 0!" << endl;
                    cout << "-----------------------------------------" << endl;
                    break;
                } else if (B != 0){
                    Result  = A / B;
                    }
                    cout << "-----------------------------------------" << endl;
                    cout << Result << endl;
                    cout << "-----------------------------------------" << endl;
                break;
        }
}




//Entrada de Dados
int main(){

float A, B;
char sinal;

cout << "-----------------------------------------" << endl;
cout << " Calculadora Básica " << endl;
cout << "-----------------------------------------" << endl;

cout << "Informe qual o sinal da operação que deseja (+, -, * ou /): ";
cin >> sinal;

cout << "Informe o primeiro termo da operaçao: ";
cin >> A;

cout << "Informe o segundo termo da operação: ";
cin >> B;

//Processamento
calcular(sinal, A, B);

//Saida de Dados
// Saida ja esta descrita na funcao

return 0;
}