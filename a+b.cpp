#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	FILE* fp;
	fp = fopen("a.txt", "r");
	while (!feof(fp)){
		fscanf(fp, "%d %d", &a, &b);
	}
    fp = fopen("b.txt", "w");
	fprintf(fp, "%d",a+b);
    fclose(fp);
	return 0;
}
