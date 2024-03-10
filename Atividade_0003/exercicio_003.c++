//Escreva um programa que verifique se três medidas formam um triângulo. Se formar, classifique-o em equilátero, escaleno ou isósceles.
//(para formar triângulo, cada lado tem que ser menor que a soma dos outros dois lados. Equilátero (todos os lados iguais), Escaleno (todos os lados diferentes) e Isósceles (dois lados iguais)

//Bibliotecas
#include <iostream>

using namespace std;

//Funcao
void triangulo (float a, float b, float c){
    if ((a + b > c) && (a + c > b) && (b + c > a)){
        if (a == b && b == c){
            cout << "-----------------------------------------" << endl;
            cout << "Eu sou um triângulo equilátero!" << endl;
            cout << "-----------------------------------------" << endl;
            } else if (a != b && b != c && a != c){
                cout << "-----------------------------------------" << endl;
                cout << "Eu sou um triângulo escaleno!" << endl;
                cout << "-----------------------------------------" << endl;
                } else if ((a == b) || (a == c) || (b == c)){
                    cout << "-----------------------------------------" << endl;
                    cout << "Eu sou um triângulo isóceles!" << endl;
                    cout << "-----------------------------------------" << endl;
                    }; 
        }else {
            cout << "-----------------------------------------" << endl;
            cout << "Não sou um triângulo, tente de novo!" << endl;
            cout << "-----------------------------------------" << endl;
        }
    
}

//Entrada de Dados
int main() {

    float a, b, c;

    cout << "-----------------------------------------" << endl;
    cout << " Que Triângulo Eu Sou? " << endl;
    cout << "-----------------------------------------" << endl;

    cout << "Informe a medida do primeiro lado: ";
    cin >> a;

    cout << "Informe a medida do segundo lado: ";
    cin >> b;

    cout << "Informe a medida do terceiro lado: ";
    cin >> c;

    //Processamento
    triangulo(a, b, c);

    //Saida de Dados
    // Saida ja esta descrita na funcao

    return 0;
}