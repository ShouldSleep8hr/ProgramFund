#include<iostream>
using namespace std;
int main() 
{
	int n,i,j;
	cin >> n;
	char b[2*n-1][4*(n-1)+1];
	for(i=0;i<2*n-1;i++){
		for(j=0;j<4*(n-1)+1;j++){
			if(j%2==0) b[i][j]='*';
			else b[i][j]=' ';
		}
	}
	for(i=0;i<n-1;i++){
		for(j=2*(i+1);j<=4*(n-1)-2*(i+1);j++){
			b[i][j]=' ';
		}
	}
	for(i=n;i<2*n-1;i++){
		for(j=-2*i+4*n-2;j<=2*(i-1);j++){
			b[i][j]=' ';
		}
	}
	for(i=0;i<2*n-1;i++){
		for(j=0;j<4*(n-1)+1;j++){
			cout << b[i][j];
		}
		cout << "\n";
	}
	return 0;
}
