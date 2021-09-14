#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i,j,num1[m][n],num2[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) scanf("%d",&num1[i][j]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) scanf("%d",&num2[i][j]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%d ",num1[i][j]+num2[i][j]);
		printf("\n");
	}
	return 0;
}
