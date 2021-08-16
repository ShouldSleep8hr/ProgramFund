#include<iostream>
using namespace std;
int main() 
{
	int n,i,j,space,star;
	cin >> n;
	star=0;
	space=4*(n-1)-1+4;
	for(i=1;i<=2*n-1;i++){
		if(i<n){
			star++;
			space-=4;
		}
		else if(i==n || i==n+1) star+=0;
		else{
			star--;
			space+=4;
		}
		for(j=1;j<=star;j++){
			if(j!=star) cout << "* ";
			else cout << "*";
		}
		if(i==n) cout << " * ";
		else for(j=1;j<=space;j++) cout << " ";
		for(j=1;j<=star;j++){
			if(j!=star) cout << "* ";
			else cout << "*";
		}
		cout << "\n";
	}
	return 0;
}


