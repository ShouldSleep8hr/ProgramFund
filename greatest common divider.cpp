#include<iostream>
using namespace std;
int main() 
{
	int a,b,i;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	for(i=b;i>=1;i--){
		if(a%i==0 && b%i==0){
			cout << "Greatest common divisor = " << i;
			break;
		}
	}
	return 0;
}
