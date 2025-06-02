#include <iostream>
using namespace std;
int factorial(int n){
	int f=1;
	for (int i=2;i<=n;i++){
		f=f*i;
	}
	return f;
}
float calcularsuma(int n){
	float suma=0;
	cout<<"desarrollo de la s: "<<endl;
	for (int i=1;i<=n;i++){
		float num=factorial(i);
	    int den=2*i;
	    float term=(float)num/den;
	    cout<<i<<"!/"<<"("<<2*i<<") ="<<num<<"/"<<den<<" = "<<term<<endl;
	    suma=suma+term;
	}
	return suma;
}
int main(){
	int n;
	cout<<"ingrese un valor para n: ";
	cin>>n;
		
	float resultado=calcularsuma(n);
	cout<<"el valor aproximado de s es: "<<resultado<<endl;
	return 0;
}

