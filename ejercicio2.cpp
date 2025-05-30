#include <iostream>
using namespace std;
int main(){
	int n;
	cout<< "ingrese la cantidad de terminos de la serie de fibonacci que desea generar: ";
	cin>>n;
	if(n<=0){
		cout<<"debe ingresar un numero mayor a 0" <<endl;
		return 1;
	}
	int a=0,b=1,suma=0;
	cout<<"serie de fibonacci: ";
	for (int i=0;i<n;i++){
		cout<<a<<" ";
		suma=suma+a;
		int siguiente=a+b;
		a=b;
		b=siguiente;
	}
	cout<<"suma de los terminos generados: "<<suma<<endl;
	return 0;
}
