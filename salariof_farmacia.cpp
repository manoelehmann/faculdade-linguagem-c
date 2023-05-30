#include <iostream>
using namespace std;

int main() {
    int funcionarios=80;
    double salario;
    double somasalarios=0;

    for (int i = 1; i <= funcionarios; i++) {
        cout<<"Digite o salário do funcionario "<<i<<": ";
        cin>>salario;
        somasalarios+=salario;
    }

    double mediasalarial=somasalarios/funcionarios;

    cout<<"Media salarial dos funcionarios: "<< mediasalarial<<endl;
    cout<<"Somatório total dos salários: "<<somasalarios<<endl;

    return 0;
}

