#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="2+2*3+2/2-1";
	int a,b ,i,sum=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='*')
		{
			b=(str[i-1]-'0')*(str[i+1]-'0');
			sum+=b;
			str[i+1]='0';
			str[i-1]='0';  
			i++;
		}
		if(str[i]=='/')
		{
			b=(str[i-1]-'0')/(str[i+1]-'0');
			sum+=b;
			str[i+1]='0';
			str[i-1]='0';
			i++;
		}
	}	
	for(i=0;i<strlen(str);i++)
	{
			if(str[i]=='+')
		{
			a=(str[i-1]-'0')+(str[i+1]-'0');
			sum+=a;
			i++;
		}
		if(str[i]=='-')
		{
			a=(str[i-1]-'0')-(str[i+1]-'0');
			sum+=a;
			i++;
		}
	}
	printf("sum=%d\n",sum); 
	return 0;
}

