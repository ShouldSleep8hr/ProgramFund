#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],num[10];
	scanf("%s",s);
	int i,j,s2,sum=0;
	for(i=0;i<strlen(s);i++){
		int n=0;
		for(j=i;j<strlen(s);j++){
			if(s[j]>='0' && s[j]<='9'){
				num[n]=s[j];
				n++;
			}
			else break;
		}
		if(n!=0){
			sscanf(num,"%d",&s2);
			sum+=s2;
			i+=strlen(num)-1;
			for(j=0;j<n;j++) num[j]='\0';
		}
	}
	printf("%04d",sum);
	return 0;
}
