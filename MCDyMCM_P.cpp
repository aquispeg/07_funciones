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
	if(x==0 || y==0){
		rMCD=(x==0)? y:x;
		rMCM=0;
	}else{
		MCDyMCM (x,y, &rMCD, &rMCM);
	}
	cout<<"----RESULTADOS----"<<endl;
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
	*mcm =(a/ *mcd)*b;
}
