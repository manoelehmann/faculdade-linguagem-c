#include <iostream>

using namespace std;

// Função para encontrar o maior valor no vetor
int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// Função para encontrar o menor valor no vetor
int encontrarMenor(int vetor[], int tamanho) {
    int menor = vetor[0];
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

// Função para encontrar o valor que se encontra na metade do vetor
int encontrarMetade(int vetor[], int tamanho) {
    return vetor[tamanho / 2];
}

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Cria um vetor com o tamanho fornecido pelo usuário
    int vetor[tamanho];

    // Solicita ao usuário que insira os valores no vetor
    cout << "Digite os valores do vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    // Chama as funções para encontrar o maior, menor e valor na metade do vetor
    int maior = encontrarMaior(vetor, tamanho);
    int menor = encontrarMenor(vetor, tamanho);
    int metade = encontrarMetade(vetor, tamanho);

    // Imprime os resultados
    cout << "O maior valor no vetor é: " << maior << endl;
    cout << "O menor valor no vetor é: " << menor << endl;
    cout << "O valor na metade do vetor é: " << metade << endl;

    return 0;
}

