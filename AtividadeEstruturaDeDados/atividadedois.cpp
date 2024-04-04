#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int tamanho = 30;
    int vetor[tamanho];

    cout << "Por favor, digite " << tamanho << " valores inteiros:" << endl;

    // Solicita ao usuário que insira os valores no vetor
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        while (!(cin >> vetor[i])) {
            // Limpa o buffer de entrada em caso de entrada inválida
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida. Por favor, digite um valor inteiro: ";
        }
    }

    cout << "Valores do vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int maior = vetor[0];
    int menor = vetor[0];

    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "Maior elemento do vetor: " << maior << endl;
    cout << "Menor elemento do vetor: " << menor << endl;

    return 0;
}

