#include <iostream>
using namespace std;

int main() {
    int funcionarios=80;
    double salario;
    double somasalarios=0;

    for (int i = 1; i <= funcionarios; i++) {
        cout<<"Digite o sal�rio do funcionario "<<i<<": ";
        cin>>salario;
        somasalarios+=salario;
    }

    double mediasalarial=somasalarios/funcionarios;

    cout<<"Media salarial dos funcionarios: "<< mediasalarial<<endl;
    cout<<"Somat�rio total dos sal�rios: "<<somasalarios<<endl;

    return 0;
}

