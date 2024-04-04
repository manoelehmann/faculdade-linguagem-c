#include <iostream>

using namespace std;

int main() {
    const int tamanho = 8;
    int vetor[tamanho];
    
    // Leitura dos valores do vetor
    cout << "Digite os 8 valores:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    // Encontrando o maior valor e sua posição
    int maior = vetor[0];
    int posicao_maior = 0;
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
    }

    // Encontrando o menor valor e sua posição
    int menor = vetor[0];
    int posicao_menor = 0;
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }

    // Mostrando as posições do maior e menor valores
    cout << "O maior valor (" << maior << ") está na posição: " << (posicao_maior + 1) << endl;
    cout << "O menor valor (" << menor << ") está na posição: " << (posicao_menor + 1) << endl;

    return 0;
}

