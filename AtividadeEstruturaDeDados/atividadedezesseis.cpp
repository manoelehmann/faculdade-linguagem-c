#include <iostream>

using namespace std;

int main() {
    const int tamanho = 15;
    int vetor[tamanho];
    int tamanho_atual = 0;

    cout << "Digite 15 n�meros em ordem crescente:" << endl;

    // Leitura e inser��o dos n�meros no vetor em ordem crescente
    for (int i = 0; i < tamanho; ++i) {
        int numero;
        cout << "Digite o n�mero " << (i + 1) << ": ";
        cin >> numero;

        // Encontrar a posi��o de inser��o do novo n�mero
        int posicao = 0;
        while (posicao < tamanho_atual && vetor[posicao] < numero) {
            posicao++;
        }

        // Empurrar os elementos para frente para abrir espa�o para o novo n�mero
        for (int j = tamanho_atual; j > posicao; j--) {
            vetor[j] = vetor[j - 1];
        }

        // Inserir o novo n�mero na posi��o encontrada
        vetor[posicao] = numero;
        tamanho_atual++;
    }

    // Impress�o do vetor final ordenado
    cout << "Vetor final ordenado:" << endl;
    for (int i = 0; i < tamanho_atual; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

