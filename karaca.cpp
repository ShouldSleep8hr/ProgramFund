#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[1000];
	scanf("%s",s);
	int i;
	for(i=0;i<strlen(s)/2;i++) swap(s[i],s[strlen(s)-i-1]);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a') s[i]='0';
		else if(s[i]=='e') s[i]='1';
		else if(s[i]=='i') s[i]='2';
		else if(s[i]=='o') s[i]='3';
		else if(s[i]=='u') s[i]='4';
	}
	printf("%saca",s);
	return 0;
}
