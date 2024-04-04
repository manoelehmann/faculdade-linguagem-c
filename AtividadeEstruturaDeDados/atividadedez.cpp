#include <iostream>

using namespace std;

int main() {
    const int tamanho = 50;
    char genero[tamanho];
    int olhos[tamanho];
    int cabelos[tamanho];


    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o gênero da pessoa " << (i + 1) << " (f - feminino, m - masculino): ";
        cin >> genero[i];
        cout << "Digite a cor dos olhos da pessoa " << (i + 1) << " (1-azul, 2-verde, 3-castanho): ";
        cin >> olhos[i];
        cout << "Digite a cor dos cabelos da pessoa " << (i + 1) << " (1-louro, 2-preto, 3-castanho): ";
        cin >> cabelos[i];
    }


    int cont_homens = 0, cont_mulheres = 0;
    int cont_olhos_azuis = 0, cont_olhos_verdes = 0, cont_olhos_castanhos = 0;
    int cont_cabelos_louros = 0, cont_cabelos_pretos = 0, cont_cabelos_castanhos = 0;

    for (int i = 0; i < tamanho; ++i) {
        if (genero[i] == 'm') {
            cont_homens++;
        } else if (genero[i] == 'f') {
            cont_mulheres++;
        }

        if (olhos[i] == 1) {
            cont_olhos_azuis++;
        } else if (olhos[i] == 2) {
            cont_olhos_verdes++;
        } else if (olhos[i] == 3) {
            cont_olhos_castanhos++;
        }

        if (cabelos[i] == 1) {
            cont_cabelos_louros++;
        } else if (cabelos[i] == 2) {
            cont_cabelos_pretos++;
        } else if (cabelos[i] == 3) {
            cont_cabelos_castanhos++;
        }
    }


    cout << "Gênero:" << endl;
    cout << cont_homens << " homens" << endl;
    cout << cont_mulheres << " mulheres" << endl;

    cout << "Olhos:" << endl;
    cout << cont_olhos_azuis << " azuis" << endl;
    cout << cont_olhos_verdes << " verdes" << endl;
    cout << cont_olhos_castanhos << " castanhos" << endl;

    cout << "Cabelos:" << endl;
    cout << cont_cabelos_louros << " louros" << endl;
    cout << cont_cabelos_pretos << " pretos" << endl;
    cout << cont_cabelos_castanhos << " castanhos" << endl;

    return 0;
}

