#include <iostream>
#include <vector>
#include <algorithm> // para usar a função std::sort e std::set_intersection

using namespace std;

// Função para realizar a interseção de dois vetores A e B
vector<int> intersecaoVetores(const vector<int>& A, const vector<int>& B) {
    // Criando um vetor para armazenar a interseção
    vector<int> C;

    // Ordenando os vetores A e B
    vector<int> A_sorted = A;
    vector<int> B_sorted = B;
    sort(A_sorted.begin(), A_sorted.end());
    sort(B_sorted.begin(), B_sorted.end());

    // Realizando a interseção entre A e B
    set_intersection(A_sorted.begin(), A_sorted.end(), B_sorted.begin(), B_sorted.end(), back_inserter(C));

    // Retornando o vetor C resultado da interseção
    return C;
}

int main() {
    // Vetores de exemplo
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {4, 5, 6, 7, 8};

    // Chamando a função para realizar a interseção dos vetores A e B
    vector<int> C = intersecaoVetores(A, B);

    // Imprimindo o vetor resultado da interseção
    cout << "Vetor C resultado da interseção de A e B: ";
    for (int i = 0; i < C.size(); ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}

