#include <iostream>

using namespace std;

int main() {
    const int tamanho = 15;
    int vetor[tamanho];

    // Leitura dos valores do vetor
    cout << "Digite os " << tamanho << " valores do vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    // Compacta��o do vetor
    int j = 0; // �ndice para marcar a pr�xima posi��o livre
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] != 0) {
            vetor[j] = vetor[i];
            j++;
        }
    }

    // Preenchimento do restante do vetor com zeros
    for (; j < tamanho; ++j) {
        vetor[j] = 0;
    }

    // Impress�o do vetor compactado
    cout << "Vetor compactado:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

