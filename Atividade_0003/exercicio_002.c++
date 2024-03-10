//Escreva um programa em C++ que receba um valor e verifique se o valor está ou não em cada um dos seguintes intervalos:
//[28,30[
//]35,40] ou [90,100]
//100 ou [200,300] ou ]500,600[

//Bibliotecas
#include <iostream>

using namespace std;

//Funcao
int intervalo (int x){
    if (x >= 28 && x < 30){
        return 1;
    } else if ((x >= 35 && x <= 40) || (x >= 90 && x < 100)){
        return 2;
    } else if ((x == 100) || (x >= 200 && x < 300) || (x > 500 && x  < 600)){
        return 3;
    } else {
        return 4;
        }
    }


//Entrada de Dados
int main(){

int x, result;

cout << "-----------------------------------------" << endl;
cout << " Dentro ou Fora do intervalo!!!" << endl;
cout << "-----------------------------------------" << endl;

cout << "Informe um número inteiro: ";
cin >> x;

//Processamento
result = intervalo(x);

//Saida de Dados
cout << "-----------------------------------------" << endl;
switch (result){
    case 1:
    cout << "O núemro informado está no intervalo: [28,30[" << endl;
    break;
    case 2:
    cout << "O núemro informado está no intervalo: ]35,40] ou [90,100]" << endl;
    break;
    case 3:
    cout << "O núemro informado está no intervalo: 100 ou [200,300] ou ]500,600[" << endl;
    break;
    case 4:
    cout << "Intervalo Desconhecido...Tente outra vez!" << endl;
    break;
}
cout << "-----------------------------------------" << endl;

return 0;
}