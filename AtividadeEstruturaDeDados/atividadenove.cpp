#include <iostream>

using namespace std;

// Fun��o para encontrar o maior valor no vetor
int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// Fun��o para encontrar o menor valor no vetor
int encontrarMenor(int vetor[], int tamanho) {
    int menor = vetor[0];
    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

// Fun��o para encontrar o valor que se encontra na metade do vetor
int encontrarMetade(int vetor[], int tamanho) {
    return vetor[tamanho / 2];
}

int main() {
    int tamanho;

    // Solicita ao usu�rio o tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    // Cria um vetor com o tamanho fornecido pelo usu�rio
    int vetor[tamanho];

    // Solicita ao usu�rio que insira os valores no vetor
    cout << "Digite os valores do vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    // Chama as fun��es para encontrar o maior, menor e valor na metade do vetor
    int maior = encontrarMaior(vetor, tamanho);
    int menor = encontrarMenor(vetor, tamanho);
    int metade = encontrarMetade(vetor, tamanho);

    // Imprime os resultados
    cout << "O maior valor no vetor �: " << maior << endl;
    cout << "O menor valor no vetor �: " << menor << endl;
    cout << "O valor na metade do vetor �: " << metade << endl;

    return 0;
}

