#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	gets(s);
	int i;
	for(i=strlen(s)-1;i>=0;i--) printf("%c",s[i]);
	return 0;
}
