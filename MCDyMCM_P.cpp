#include <iostream>
using namespace std;
void MCDyMCM(int a,int b, int *mcd, int *mcm);
int main (){
	int x=18, y=24;
	int rMCD, rMCM;
	MCDyMCM (x,y, &rMCD, &rMCM);
	cout<<"MCD: "<<rMCD<<endl;
	cout<<"MCM: "<<rMCM<<endl;
	return 0;
}
void MCDyMCM (int a, int b, int *mcd, int *mcm){
	int x=a,y=b;
	while (y!=0){
		int tem=y;
		y=x%y;
		x=tem;
	}
	*mcd=x;
	*mcm =(a*b)/(*mcd);
}
