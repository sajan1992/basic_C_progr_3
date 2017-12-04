#include<stdio.h>
int table(int);
int main()
{
	int input;

	printf("Enter the number to gets its table\n");
	scanf("%d",&input);
	table(input);
}

int table (int a)
{
	int in = a;
	printf("Table of the given number:\n");
	for(int i = 1; i<= 10; i++)
	printf("%d * %d = %d\n",in,i,(in*i));
}
	
