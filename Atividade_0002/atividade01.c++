/*Desenvolva um programa para imprimir quatro tabuadas na tela do computador utilizando apenas o printf sem utilizar laços de repetição*/

#include <iostream>
#include <iomanip>//biblioteca para padronizar espaços da matriz impressa

int main() {
int matriz[2][2] = {{1, 2},
                    {3, 4}};

    printf("Matriz 2x2:\n");
    printf("+---------------+---------------+\n");

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