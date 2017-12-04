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
	printf("Square of the given number: %d\n",(in*in));
}
	
