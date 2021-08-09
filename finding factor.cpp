#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	int num,i,n;
	vector<int> fac;
	cout << "Enter number : ";
	cin >> num;
	n=num;
	i=2;
	while(i<n){
		if(num%i==0){
			num=num/i;
			//cout << i << " ";
			fac.push_back(i);
			i=1;
		}
		i++;
	}
	cout << "Factoring Result : ";
	vector<int>::iterator itr;
	for(itr=fac.begin();itr!=fac.end();itr++){
		if(itr==fac.end()-1) cout << *itr;
		else cout << *itr << " x ";
	}
	return 0;
}
