#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int numeros_lidos = 0;

    cout << "Digite 10 números diferentes:" << endl;

    // Leitura dos números
    while (numeros_lidos < tamanho) {
        int numero;
        cout << "Digite o número " << (numeros_lidos + 1) << ": ";
        cin >> numero;

        // Verifica se o número já foi digitado antes
        bool numero_duplicado = false;
        for (int i = 0; i < numeros_lidos; ++i) {
            if (vetor[i] == numero) {
                numero_duplicado = true;
                break;
            }
        }

        // Se o número já foi digitado, solicita um novo número
        if (numero_duplicado) {
            cout << "Número duplicado! Por favor, digite outro número." << endl;
        } else {
            vetor[numeros_lidos] = numero;
            numeros_lidos++;
        }
    }

    // Impressão do vetor final
    cout << "Vetor final:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

