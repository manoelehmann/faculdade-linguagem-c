#include<iostream>
#include <cstdlib>
using namespace std;

float n1, n2;

float soma(){
	float resultado;
	
	resultado=n1+n2;
		
	return resultado;
}

float subtrair(){
	float resultado;
	
	resultado=n1-n2;
		
	return resultado;
}

float dividir(){
	float resultado=0;
	
	if(n2==0){
		
	return resultado;
	
   }else{
	resultado=n1*n2;
		
	return resultado;
}
}

float multiplicar(){
	float resultado;
	
	resultado=n1/n2;
		
	return resultado;
}

void numeros(){
	cout<<"Digite um numero: ";
	cin>>n1;
	
	cout<<"Digite outro numero: ";
	cin>>n2;
}

void menu(){
	int opc;
	do{
		
		cout<<">>>>>CALCULADORA BASICA<<<<<"<<endl;
		cout<<"Escolha a operacao desejada\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair"<<endl;
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"O resultado da soma e: "<<soma()<<endl;
				break;
			case 2:
				cout<<"O resultado da subtracao e: "<<subtrair()<<endl;
				break;
			case 3:
			    cout<<"O resultado da multiplicacao e: "<<multiplicar()<<endl;
				break;	
			case 4:
				cout<<"O resultado da divisao e: "<<dividir()<<endl;
				break;
			case 0:
				cout<<"Valeu por utlizar o software!"<<endl;
				break;
			default:
			    cout<<"Opcao invalida"<<endl;
				break; 
		}
		
		system ("pause");
		system ("cls");
	}while(opc!=0);
}


int main(){
	numeros();
	system ("cls");
    menu();
	
	return 0;
	
}
