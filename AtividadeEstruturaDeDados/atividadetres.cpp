#include <iostream>

using namespace std;

int main() {
    const int tamanho = 50;
    int vetor[tamanho];
    int soma = 0;
34

    cout << "Digite 50 valores inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << (i + 1) << ": ";
        cin >> vetor[i];
        soma += vetor[i]; 
    }

    double media = static_cast<double>(soma) / tamanho;

    cout << "A m�dia aritm�tica dos valores �: " << media << endl;

    return 0;
}

