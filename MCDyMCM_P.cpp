#include <iostream>
using namespace std;
void MCDyMCM(int a,int b, int *mcd, int *mcm);
int main (){
	int x, y;
	cout<<"agregar el valor de x: "<<endl;
	cin>>x;
	cout<<"agregar el valor de y: "<<endl;
	cin>>y;
	int rMCD, rMCM;
	MCDyMCM (x,y, &rMCD, &rMCM);
	cout<<"MCD: "<<rMCD<<endl;
	cout<<"MCM: "<<rMCM<<endl;
	return 0;
}
void MCDyMCM (int a, int b, int *mcd, int *mcm){
	int x=a;
	int y=b;
	while (y!=0){
	    int temp=y;
	    y=x%y;
	    x=temp;
	}
	*mcd=x;
	*mcm =(a*b)/(*mcd);
}
