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
	cout<<"ingrese dos numeros positivos: ";
	cin>>num1>>num2;
	
	divporrest(num1,num2);
	return 0;
}

