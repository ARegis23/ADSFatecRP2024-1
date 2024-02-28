/*Altere o programa anterior de forma a solicitar que o usuário escolha as quatro tabuadas que ele quer ver na tela do computador*/

#include <iostream>
#include <iomanip> //biblioteca para padronizar espaços da matriz impressa

int main() {
    int matriz[2][2];
    int tabuadas[4]; 

    // Entrada de Dados pelo Usuário
    std::cout << "Insira a primeira tabuada (de 1 a 10): ";
    std::cin >> tabuadas[0];

    std::cout << "Insira a segunda tabuada (de 1 a 10): ";
    std::cin >> tabuadas[1];

    std::cout << "Insira a terceira tabuada (de 1 a 10): ";
    std::cin >> tabuadas[2];

    std::cout << "Insira a quarta tabuada (de 1 a 10): ";
    std::cin >> tabuadas[3];

    std::cout << "Matriz 2x2:\n";
    std::cout << "+---------------+---------------+\n";

    // Matriz exemplo da localização da tabuada dos números informados pelo usuário
    std::cout << "| " << std::setw(2) << (matriz[0][0] = tabuadas[0]) << "\t| " << std::setw(2) << (matriz[0][1] = tabuadas[1]) << "\t|\n";
    std::cout << "| " << std::setw(2) << (matriz[1][0] = tabuadas[2]) << "\t| " << std::setw(2) << (matriz[1][1] = tabuadas[3]) << "\t|\n";
    std::cout << "+---------------+---------------+\n";



    // Tabuada para o elemento (0,0) e (0,1)
    printf("| %2d x  1 = %3d\t| %2d x  1 = %3d\t|\n", matriz[0][0], matriz[0][0] * 1, matriz[0][1], matriz[0][1] * 1);
    printf("| %2d x  2 = %3d\t| %2d x  2 = %3d\t|\n", matriz[0][0], matriz[0][0] * 2, matriz[0][1], matriz[0][1] * 2);
    printf("| %2d x  3 = %3d\t| %2d x  3 = %3d\t|\n", matriz[0][0], matriz[0][0] * 3, matriz[0][1], matriz[0][1] * 3);
    printf("| %2d x  4 = %3d\t| %2d x  4 = %3d\t|\n", matriz[0][0], matriz[0][0] * 4, matriz[0][1], matriz[0][1] * 4);
    printf("| %2d x  5 = %3d\t| %2d x  5 = %3d\t|\n", matriz[0][0], matriz[0][0] * 5, matriz[0][1], matriz[0][1] * 5);
    printf("| %2d x  6 = %3d\t| %2d x  6 = %3d\t|\n", matriz[0][0], matriz[0][0] * 6, matriz[0][1], matriz[0][1] * 6);
    printf("| %2d x  7 = %3d\t| %2d x  7 = %3d\t|\n", matriz[0][0], matriz[0][0] * 7, matriz[0][1], matriz[0][1] * 7);
    printf("| %2d x  8 = %3d\t| %2d x  8 = %3d\t|\n", matriz[0][0], matriz[0][0] * 8, matriz[0][1], matriz[0][1] * 8);
    printf("| %2d x  9 = %3d\t| %2d x  9 = %3d\t|\n", matriz[0][0], matriz[0][0] * 9, matriz[0][1], matriz[0][1] * 9);
    printf("| %2d x 10 = %3d\t| %2d x 10 = %3d\t|\n", matriz[0][0], matriz[0][0] * 10, matriz[0][1], matriz[0][1] * 10);

    printf("+---------------+---------------+\n");

    // Tabuada para o elemento (1,0) e (1,1)
    printf("| %2d x  1 = %3d\t| %2d x  1 = %3d\t|\n", matriz[1][0], matriz[1][0] * 1, matriz[1][1], matriz[1][1] * 1);
    printf("| %2d x  2 = %3d\t| %2d x  2 = %3d\t|\n", matriz[1][0], matriz[1][0] * 2, matriz[1][1], matriz[1][1] * 2);
    printf("| %2d x  3 = %3d\t| %2d x  3 = %3d\t|\n", matriz[1][0], matriz[1][0] * 3, matriz[1][1], matriz[1][1] * 3);
    printf("| %2d x  4 = %3d\t| %2d x  4 = %3d\t|\n", matriz[1][0], matriz[1][0] * 4, matriz[1][1], matriz[1][1] * 4);
    printf("| %2d x  5 = %3d\t| %2d x  5 = %3d\t|\n", matriz[1][0], matriz[1][0] * 5, matriz[1][1], matriz[1][1] * 5);
    printf("| %2d x  6 = %3d\t| %2d x  6 = %3d\t|\n", matriz[1][0], matriz[1][0] * 6, matriz[1][1], matriz[1][1] * 6);
    printf("| %2d x  7 = %3d\t| %2d x  7 = %3d\t|\n", matriz[1][0], matriz[1][0] * 7, matriz[1][1], matriz[1][1] * 7);
    printf("| %2d x  8 = %3d\t| %2d x  8 = %3d\t|\n", matriz[1][0], matriz[1][0] * 8, matriz[1][1], matriz[1][1] * 8);
    printf("| %2d x  9 = %3d\t| %2d x  9 = %3d\t|\n", matriz[1][0], matriz[1][0] * 9, matriz[1][1], matriz[1][1] * 9);
    printf("| %2d x 10 = %3d\t| %2d x 10 = %3d\t|\n", matriz[1][0], matriz[1][0] * 10, matriz[1][1], matriz[1][1] * 10);

    printf("+---------------+---------------+\n");

    return 0;
}