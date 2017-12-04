#include<stdio.h>

int main()
{
	int i,j;

	for(i = 0;i<6;i++)
	{
		printf("\n");
		for(j=5;j>=i;j--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		for(j=0;j<=i;j++)
			printf("*");
	}

	for(i = 0;i<6;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
			printf(" ");
		for(j=5;j>i;j--)
			printf("*");
		for(j=5;j>=i;j--)
			printf("*");
	}	
	printf("\n");
}
