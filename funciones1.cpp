#include <iostream>
using namespace std;
void resta( int val1, int val2);
int producto(int val1,int val2); 
int suma(int val1,int val2);
void division(int val1,int val2);
int main (){
	int num1,num2,resultado;
	cout<<"ingrese el primer numero: "; cin>>num1;
	cout<<"ingrese el segundo numero: "; cin>>num2;
	resta(num1,num2);
	resta(num2,num1);
	resultado=producto(num1,num2);
	cout<<"la multiplicacion de  "<< num1 <<" por "<< num2 <<" es:  "<< resultado<<endl;
	resultado=suma(num1,num2);
	cout<<"la suma de "<<num1<<" mas "<<num2<<" es: "<<resultado<<endl;
	
	division(num1,num2);
	division(num2,num1);
	return 0;
	
}
void resta( int val1, int val2){
	int sustrac;
	sustrac= val1-val2;
	cout<<"la resta de "<< val1 <<" - "<< val2 <<" es: "<< sustrac <<endl;
		
}
int producto (int val1, int val2){
	int prod;
	prod=val1*val2;
	return (prod);
}
int suma(int val1,int val2){
	int sum;
	sum=val1+val2;
	return (sum);
}
void division(int val1, int val2){
    if (val2==0){
	cout<<"error:  no se puede dividir "<< val1 <<" entre cero. "<<endl;
    }else{
	float resultado=(float)val1/val2;
	cout<<"la division de "<< val1 << " / " << val2 << " es: "<< resultado <<endl;
    }
}

