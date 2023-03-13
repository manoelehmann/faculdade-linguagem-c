#include <iostream>
using namespace std;

int main(){
	
	int n1,n2,n3,n4;
	char op;
	
	cout<<"Digite umas dessas operacoes: [+ - * /]"<<endl;
	cin>>op;
	
	cout<<"Digite os primeiros algarismos"<<endl;
	cin>>n1;
	
	cout<<"Digite os segundos algarismos"<<endl;
	cin>>n2;
	
	if (op=='+'){
		n1=n1+n2;
		cout<<"O resultado da soma e: "<<n1;
	}
	
	if (op=='-'){
		
		n2=n1-n2;
		cout<<"O resultado da subtracao e: "<<n2;
	}
	
	if (op=='*'){
		
		n3=n1*n2;
		cout<<"O resultado da multiplicacao e: "<<n3;
	}
	
	if (op=='/'){
		
	   n4=n1/n2;
	   cout<<"O resultado da divisao e: "<<n4;	
	}
	

	return 0;
}
