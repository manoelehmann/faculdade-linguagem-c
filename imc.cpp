#include<iostream>
using namespace std;

int main(){
	float continuar, idade, peso, altura, res;
	
	cout<<"Ola, seja bem vindo a calculadora de Indice de Massa Corporal.\nAperte 0 para continuar"<<endl;
	cin>>continuar;
	
	if(continuar>0){
		cout<<"Erro";
		return 0;
	}
	
	cout<<"\nQual e a sua idade: ";
	cin>>idade;
	
	cout<<"Qual o seu peso: ";
	cin>>peso;
	
	
	cout<<"Qual sua altura: ";
	cin>>altura;
	
	res=peso/(altura * altura);
	cout<<"O seu IMC e: "<<res;
	
	if(res<18.5){
		cout<<"\nAbaixo do Peso";
	}
	
	if(res>=18.6){
	if(res<=24.9)
		cout<<"\nPeso Normal";
	}
	
	if(res>=25.0){
	if(res<=29.9)
	    cout<<"\nPre Obesidade";
	}
	
	if(res>=30.0){
	if(res<=34.9)
	    cout<<"\nObesidade Grau 1";
	}
	
	if(res>=35.0){
	if(res<=39.9)
	    cout<<"\nObesidade Grau 2";
	}
	
	if(res>=40.0){
		cout<<"\nObesidade Grau 3";
	}
	
	
}
