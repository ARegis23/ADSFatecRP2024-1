#include <iostream>

using namespace std;

//funcao
void calcular(char op, float num1, float num2){
    float resultado;
        switch(op) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            if (num2 > num1){
                resultado = num2 - num1;
            }
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Erro! Divisão por zero!" << endl;
            }
            break;
        default:
            cout << "Operador inválido!" << endl;
            break;
    }
}

//funcao principal
int main(){
    char op;
    float num1, num2;

    //entrada de dados
    cout << "Digite o operador (+, -, *, /):";
    cin >> op;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    //chamada da funcao
    calcular(op, num1, num2);

return 0;
}
