#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int numeros_lidos = 0;

    cout << "Digite 10 n�meros diferentes:" << endl;

    // Leitura dos n�meros
    while (numeros_lidos < tamanho) {
        int numero;
        cout << "Digite o n�mero " << (numeros_lidos + 1) << ": ";
        cin >> numero;

        // Verifica se o n�mero j� foi digitado antes
        bool numero_duplicado = false;
        for (int i = 0; i < numeros_lidos; ++i) {
            if (vetor[i] == numero) {
                numero_duplicado = true;
                break;
            }
        }

        // Se o n�mero j� foi digitado, solicita um novo n�mero
        if (numero_duplicado) {
            cout << "N�mero duplicado! Por favor, digite outro n�mero." << endl;
        } else {
            vetor[numeros_lidos] = numero;
            numeros_lidos++;
        }
    }

    // Impress�o do vetor final
    cout << "Vetor final:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

