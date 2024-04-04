#include <iostream>

using namespace std;

int main() {
    const int tamanho = 15;
    int vetor[tamanho];
    
   
    cout << "Digite os " << tamanho << " valores do vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> vetor[i];
    }

   
    int X, Y;
    do {
        cout << "Digite o valor de X (posi��o de 1 a " << tamanho << "): ";
        cin >> X;
        cout << "Digite o valor de Y (posi��o de 1 a " << tamanho << "): ";
        cin >> Y;

        if (X < 1 || X > tamanho || Y < 1 || Y > tamanho) {
            cout << "Posi��es inv�lidas. As posi��es devem estar entre 1 e " << tamanho << ". Digite novamente." << endl;
        }
    } while (X < 1 || X > tamanho || Y < 1 || Y > tamanho);

    int soma = vetor[X - 1] + vetor[Y - 1];
    cout << "A soma dos valores das posi��es " << X << " e " << Y << " �: " << soma << endl;

    return 0;
}

