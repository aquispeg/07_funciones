#include <iostream>
using namespace std;
int factorial (int n);
int main(){
	int m,n,c;
	cout<<"ingrese los indices de la combinatoria: "<<endl;
	cin>>m>>n;
	c=(factorial(m))/((factorial(n)*factorial(m-n)));
	cout<<"el valor de la combinatoria es"<<endl
	    <<c;
	return 0;
}
int factorial (int n){
	int f;
	f=1;
	for (int i=2;i<=n;i++){
		f=f*i;
	}
	return f;
}
