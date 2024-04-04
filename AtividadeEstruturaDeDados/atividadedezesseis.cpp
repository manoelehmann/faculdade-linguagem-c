#include <iostream>

using namespace std;

int main() {
    const int tamanho = 15;
    int vetor[tamanho];
    int tamanho_atual = 0;

    cout << "Digite 15 números em ordem crescente:" << endl;

    // Leitura e inserção dos números no vetor em ordem crescente
    for (int i = 0; i < tamanho; ++i) {
        int numero;
        cout << "Digite o número " << (i + 1) << ": ";
        cin >> numero;

        // Encontrar a posição de inserção do novo número
        int posicao = 0;
        while (posicao < tamanho_atual && vetor[posicao] < numero) {
            posicao++;
        }

        // Empurrar os elementos para frente para abrir espaço para o novo número
        for (int j = tamanho_atual; j > posicao; j--) {
            vetor[j] = vetor[j - 1];
        }

        // Inserir o novo número na posição encontrada
        vetor[posicao] = numero;
        tamanho_atual++;
    }

    // Impressão do vetor final ordenado
    cout << "Vetor final ordenado:" << endl;
    for (int i = 0; i < tamanho_atual; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

