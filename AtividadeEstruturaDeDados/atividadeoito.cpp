#include <iostream>

using namespace std;

int contarOcorrencias(int X[], int tamanho, int Y) {
    int contador = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (X[i] == Y) {
            contador++;
        }
    }
    return contador;
}

int main() {
    const int tamanho = 8;
    int X[tamanho] = {2, 4, 6, 4, 2, 8, 2, 4};
    int Y;

    cout << "Digite o valor inteiro Y: ";
    cin >> Y;

    int ocorrencias = contarOcorrencias(X, tamanho, Y);

    cout << "O valor " << Y << " aparece " << ocorrencias << " vezes no array X." << endl;

    return 0;
}

