#include<stdio.h>

int main()
{	
	long int num,num1;//initializing of data type

	printf("Enter your phone number:\n");
	scanf("%ld",&num);
	num1 = num;

	while(num1!=0)
	{
		printf("%ld",(num1%10));
		num1 = num1/10;
	}
}
