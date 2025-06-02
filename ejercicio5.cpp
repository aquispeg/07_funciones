#include <iostream>
using namespace std;
int mcd(int a, int b){
	return(b==0)? a: mcd(b,a%b);
}
int mcm( int a , int b){
	return (a*b)/mcd(a,b);
}
int main(){
	int a,b,c,d;
	cout<<"ingrese 4 numeros enteros: ";
	cin>>a>>b>>c>>d;
	int resultado_mcd=mcd(mcd(mcd(a,b),c),d);
	int resultado_mcm=mcm(mcm(mcm(a,b),c),d);
	cout<<"máximo comun divisor (mcd) de 4 numeros: "<<resultado_mcd<<endl;
	cout<<"minimo comun divisor (mcm) de 4 numeros: "<<resultado_mcm<<endl;
	
	return 0;
	
}


