#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n,ans=1;
	scanf("%d",&n);
	if(n==0) printf("1");
	else{
		for(int i=n;i>=1;i--) ans*=i;
		printf("%d",ans);
	}
	return 0;
}
