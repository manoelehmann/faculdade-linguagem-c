#include <iostream>


int main() {
    int vetor[10];

    for (int i = 0; i < 10; ++i) {
        vetor[i] = i + 1;
    }

    cout << "Valores do vetor: ";
    for (int i = 0; i < 10; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
