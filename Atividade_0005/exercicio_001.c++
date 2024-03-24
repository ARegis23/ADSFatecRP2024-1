#include <iostream>

using namespace std;

int main() {
    char continuar;
    double peso, altura;
    double maiorPeso = 0, menorPeso = 9999999; // Valor inicial grande para garantir que qualquer peso seja menor
    double maiorAltura = 0, menorAltura = 9999999; // Valor inicial grande para garantir que qualquer altura seja menor
    double maiorIMC = 0, menorIMC = 9999999; // Valor inicial grande para garantir que qualquer IMC seja menor
    double somaPeso = 0, somaAltura = 0, somaIMC = 0;
    int contador = 0;

    do {
        // Pergunta se deseja continuar
        cout << "Deseja inserir informações para outra pessoa? (s/n): ";
        cin >> continuar;

        // Limpa o buffer de entrada
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Se o usuário não quiser continuar, sai do loop
        if (continuar != 's' && continuar != 'S') {
            break;
        }

        // Incrementa o contador de pessoas
        contador++;

        // Entrada do peso
        cout << "Digite o peso da pessoa " << contador << ": ";
        cin >> peso;

        // Entrada da altura
        cout << "Digite a altura da pessoa " << contador << ": ";
        cin >> altura;

        // Calcula o IMC
        double imc = peso / (altura * altura);

        // Atualiza o maior e menor peso
        if (peso > maiorPeso) {
            maiorPeso = peso;
        }
        if (peso < menorPeso) {
            menorPeso = peso;
        }

        // Atualiza o maior e menor altura
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        // Atualiza o maior e menor IMC
        if (imc > maiorIMC) {
            maiorIMC = imc;
        }
        if (imc < menorIMC) {
            menorIMC = imc;
        }

        // Soma para cálculo da média
        somaPeso += peso;
        somaAltura += altura;
        somaIMC += imc;

    } while (continuar == 's' || continuar == 'S');

    if (contador == 0) {
        cout << "Nenhuma informação foi inserida." << endl;
        return 0;
    }

    // Calcula as médias
    double mediaPeso = somaPeso / contador;
    double mediaAltura = somaAltura / contador;
    double mediaIMC = somaIMC / contador;

    // Imprime os resultados
    cout << "Maior peso: " << maiorPeso << endl;
    cout << "Menor peso: " << menorPeso << endl;
    cout << "Maior altura: " << maiorAltura << endl;
    cout << "Menor altura: " << menorAltura << endl;
    cout << "Maior IMC: " << maiorIMC << endl;
    cout << "Menor IMC: " << menorIMC << endl;
    cout << "Média de pesos: " << mediaPeso << endl;
    cout << "Média de alturas: " << mediaAltura << endl;
    cout << "Média de IMCs: " << mediaIMC << endl;

    return 0;
}
