#include <iostream>
using namespace std;
	void divporrest(int num1, int num2){
	int mayor, menor;
	if(num1>num2){
		mayor=num1;
		menor=num2;
	}else{
		mayor=num2;
		menor=num1;
	}
	int cociente=0;
	int resto=mayor;
	while(resto>=menor){
		resto=resto-menor;
		cociente=cociente+1;
	}
	cout<<"cociente: "<<cociente<<endl;
	cout<<"resto: "<<resto<<endl;
}
int main(){
	int num1,num2;
	do{
	   cout<<"ingrese dos numeros positivos y distinto de cero: ";
	   cin>>num1>>num2;	
	   if(num1<=0 || num2<=0){
	   	cout<<"error: ambos numeros deben ser mayor que cero: "<<endl;
	   }
	}while(num1<=0 || num2<=0);
	
	
	divporrest(num1,num2);
	
	return 0;
}
	


