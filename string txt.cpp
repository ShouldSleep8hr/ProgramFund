#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	printf("Input data string:\n");
	FILE* fp;
    fp = fopen("data.txt", "w");
	while(1){
		scanf("%s",s);
		fprintf(fp, "%s\n",s);
		if(s[0] == '.') break;
	}
    fclose(fp);
	return 0;
}
