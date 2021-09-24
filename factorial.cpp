#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long n,ans=1;
	scanf("%lld",&n);
	if(n==0) printf("1");
	else{
		for(int i=n;i>=1;i--) ans*=i;
		printf("%lld",ans);
	}
	return 0;
}
