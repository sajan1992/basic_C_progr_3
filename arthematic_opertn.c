#include<stdio.h>

int main()
{
	int a,b,result,ch;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("Enter the choice:\n1.Add\n2.Substract\n3.Multiply\n4.Division\n5.Modulus\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			result = a + b;
			printf("(%d) + (%d) = (%d)\n",a,b,result);
			break;
		case 2:
			
			result = a - b;
			printf("(%d) + (%d) = (%d)\n",a,b,result);
			break;
		case 3:
			
			result = a * b;
			printf("(%d) + (%d) = (%d)\n",a,b,result);
			break;
		case 4:
			
			result = a / b;
			printf("(%d) + (%d) = (%d)\n",a,b,result);
			break;
		case 5:
			
			result = a % b;
			printf("(%d) + (%d) = (%d)\n",a,b,result);
			break;
	}
	return 0;

}
