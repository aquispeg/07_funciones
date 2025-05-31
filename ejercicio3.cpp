#include <iostream>
using namespace std;
bool esprimo(int n){
	if(n<=1){
		cout<<n<<"no es primo porque es menor o igual que 1"<<endl;
		return false;
	}
	if (n==2) return 1;
	if (n%2==0){
		cout<<n<<" no es primo porque es divisible por 2"<<endl;
		return true;
	}
	for (int i=3;i*i<=n;i= i+2){
		if(n&i ==0){
			cout<<n<<"no es primo porque es divisible por "<<i<<" . "<<endl;
			return false;
		}
	}
	return true;
	
}
int main(){
	int numero;
	cout<<"ingrese un numero entero positivo: ";
	cin>>numero;
	if (esprimo(numero)){
		cout<<numero<< " es un numero primo. "<<endl;
	} else {
		
	}
	return false;
}
