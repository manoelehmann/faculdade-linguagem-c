#include <iostream>
#include <vector>
#include <algorithm> // para usar a fun��o std::sort e std::set_intersection

using namespace std;

// Fun��o para realizar a interse��o de dois vetores A e B
vector<int> intersecaoVetores(const vector<int>& A, const vector<int>& B) {
    // Criando um vetor para armazenar a interse��o
    vector<int> C;

    // Ordenando os vetores A e B
    vector<int> A_sorted = A;
    vector<int> B_sorted = B;
    sort(A_sorted.begin(), A_sorted.end());
    sort(B_sorted.begin(), B_sorted.end());

    // Realizando a interse��o entre A e B
    set_intersection(A_sorted.begin(), A_sorted.end(), B_sorted.begin(), B_sorted.end(), back_inserter(C));

    // Retornando o vetor C resultado da interse��o
    return C;
}

int main() {
    // Vetores de exemplo
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {4, 5, 6, 7, 8};

    // Chamando a fun��o para realizar a interse��o dos vetores A e B
    vector<int> C = intersecaoVetores(A, B);

    // Imprimindo o vetor resultado da interse��o
    cout << "Vetor C resultado da interse��o de A e B: ";
    for (int i = 0; i < C.size(); ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}

