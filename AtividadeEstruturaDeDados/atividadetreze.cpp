#include <iostream>
#include <vector>
#include <algorithm> // para usar a função std::sort

using namespace std;

// Função para realizar a diferença de dois vetores A e B
vector<int> diferencaVetores(const vector<int>& A, const vector<int>& B) {
    // Criando um vetor para armazenar a diferença
    vector<int> C;

    // Verificando cada elemento de A
    for (int i = 0; i < A.size(); ++i) {
        // Verifica se o elemento de A não está em B
        if (find(B.begin(), B.end(), A[i]) == B.end()) {
            // Se não está em B, adiciona ao vetor de diferença
            C.push_back(A[i]);
        }
    }

    // Retornando o vetor C resultado da diferença
    return C;
}

int main() {
    // Vetores de exemplo
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {4, 5, 6, 7, 8};

    // Chamando a função para realizar a diferença dos vetores A e B
    vector<int> C = diferencaVetores(A, B);

    // Imprimindo o vetor resultado da diferença
    cout << "Vetor C resultado da diferença entre A e B: ";
    for (int i = 0; i < C.size(); ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}

