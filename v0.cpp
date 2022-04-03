#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="3+4";
	int a,b;
	a=str[0]-'0';
	b=str[2]-'0';
	int sum=a+b;
	printf("sum=%d\n",sum); 
	return 0;
} 
