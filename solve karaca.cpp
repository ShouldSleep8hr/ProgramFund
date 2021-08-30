#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[1000];
	scanf("%s",s);
	int i;
	s[strlen(s)-3]='\0';
	for(i=0;i<strlen(s);i++){
		if(s[i]=='0') s[i]='a';
		else if(s[i]=='1') s[i]='e';
		else if(s[i]=='2') s[i]='i';
		else if(s[i]=='3') s[i]='o';
		else if(s[i]=='4') s[i]='u';
	}
	for(i=0;i<strlen(s)/2;i++) swap(s[i],s[strlen(s)-i-1]);
	printf("%s",s);
	return 0;
}
