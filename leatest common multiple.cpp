#include<iostream>
using namespace std;
int main() 
{
	int a,b,i,j,a2=1,b2=1;
	cin >> a >> b;
	for(i=1;i<=b;i++){
		a2=a*i;
		for(j=1;j<=a;j++){
			b2=b*j;
			if(b2==a2){
				cout << b2;
				return 0;
			}
		}
	}
}
