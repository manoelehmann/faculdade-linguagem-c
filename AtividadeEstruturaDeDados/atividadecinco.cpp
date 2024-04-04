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

    // Leitura das posições X e Y
    int X, Y;
    do {
        cout << "Digite o valor de X (posição de 1 a " << tamanho << "): ";
        cin >> X;
        cout << "Digite o valor de Y (posição de 1 a " << tamanho << "): ";
        cin >> Y;
        
        // Verifica se as posições são válidas
        if (X < 1 || X > tamanho || Y < 1 || Y > tamanho) {
            cout << "Posições inválidas. As posições devem estar entre 1 e " << tamanho << ". Digite novamente." << endl;
        }
    } while (X < 1 || X > tamanho || Y < 1 || Y > tamanho);

    // Soma dos valores nas posições X e Y
    int soma = vetor[X - 1] + vetor[Y - 1];
    cout << "A soma dos valores das posições " << X << " e " << Y << " é: " << soma << endl;

    return 0;
}

