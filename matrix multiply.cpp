#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m,n,m2,n2;
	scanf("%d %d",&m,&n);
	int i,j,num1[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) scanf("%d",&num1[i][j]);
	}
	scanf("%d %d",&m2,&n2);
	int num2[m2][n2];
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++) scanf("%d",&num2[i][j]);
	}
	if(n!=m2){
		printf("ERROR");
		return 0;
	}
	int num3[m][n2],k;
	for(i=0;i<m;i++){
		for(j=0;j<n2;j++){
			num3[i][j]=0;
			for(k=0;k<m2;k++) num3[i][j] += num1[i][k]*num2[k][j];
			printf("%d ",num3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
