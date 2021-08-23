#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],s2[1000];
	gets(s);
	int i,n=strlen(s);
	for(i=0;i<n/2;i++) s2[i]=s[n-i-1];
	printf("%s",s2);
	return 0;
}
