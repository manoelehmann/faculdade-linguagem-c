#include <iostream>
#include <vector>
#include <algorithm> // para usar a fun��o std::sort

using namespace std;

// Fun��o para realizar a diferen�a de dois vetores A e B
vector<int> diferencaVetores(const vector<int>& A, const vector<int>& B) {
    // Criando um vetor para armazenar a diferen�a
    vector<int> C;

    // Verificando cada elemento de A
    for (int i = 0; i < A.size(); ++i) {
        // Verifica se o elemento de A n�o est� em B
        if (find(B.begin(), B.end(), A[i]) == B.end()) {
            // Se n�o est� em B, adiciona ao vetor de diferen�a
            C.push_back(A[i]);
        }
    }

    // Retornando o vetor C resultado da diferen�a
    return C;
}

int main() {
    // Vetores de exemplo
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {4, 5, 6, 7, 8};

    // Chamando a fun��o para realizar a diferen�a dos vetores A e B
    vector<int> C = diferencaVetores(A, B);

    // Imprimindo o vetor resultado da diferen�a
    cout << "Vetor C resultado da diferen�a entre A e B: ";
    for (int i = 0; i < C.size(); ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}

