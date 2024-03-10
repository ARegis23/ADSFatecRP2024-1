//Escreva um programa que receba duas notas, calcule e imprima a média e informe se o aluno está aprovado, reprovado ou de exame. (aprovado média >=6, reprovado média < 3 e exame média>=3 e média < 6


//Bibliotecas
#include <iostream>

using namespace std;

//Funcao
float media (float n1, float n2){
    return (n1+n2)/2;
}

//Entrada de Dados
int main(){

    float n1, n2, result;
    string aluno;

    cout << "-----------------------------------------" << endl;
    cout << "Media de 2 notas" << endl;
    cout << "-----------------------------------------" << endl;

    cout << "Informe a priemeira nota: ";
    cin >> n1;

    cout << "Informe a segunda nota: ";
    cin >> n2;


    //Processamento
    result = media(n1,n2);

    if ( result >= 6){
        aluno = "APROVADO";
        } else if (result < 3){
            aluno = "REPROVADO";
            } else if ((result >= 3) || (result < 6)){
                aluno = "Você está de exame!";
            }
   

    //Saida de Dados
    cout << "-----------------------------------------" << endl;
    cout << "A méda das notas " << n1 << ", " << n2 << " é: " << result << endl;
    cout << "O aluno está:  " << aluno << endl;
    cout << "-----------------------------------------" << endl;


    return 0;
}