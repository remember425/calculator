#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="1+2+2+1+2+5+4-1-3+4-8";
	int a,b,sum=0;
	sum=sum+str[0]-'0';
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='+')
		{
			sum=sum+(str[i+1]-'0');
			i++; 
		}
		if(str[i]=='-')
		{
			sum=sum-(str[i+1]-'0');
			i++;
		}
	}
	printf("sum=%d\n",sum); 
	return 0;

