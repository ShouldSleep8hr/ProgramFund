#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[1000];
	scanf("%s",s);
	int i;
	double n,sum=0;
	for(i=strlen(s)-1;i>=0;i--){
		if(s[i]>='0' && s[i]<='9'){
			sum+=(s[i]-48)*pow(10,n);
			n++;
		}
		else n=0;
	}
	printf("%04d",(int)sum);
	return 0;
}
