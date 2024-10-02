#include <stdio.h>
  int main()
{
	int a,b,c,ch;
	printf("Enter a first number = ");
	scanf("%d",&a);
	printf("Enter a second number = ");
	scanf("%d",&b);
	printf("\n\n<<<<<<<< MENU >>>>>>>>>>\n\n");
	printf("<1> Addition\n<2> Subtraction\n<3> Multiplication\n<4> Division\n<5> Modulas\n");
	printf("\nEnter your choice = ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			c=a+b;
			printf("\nAddition = %d",c);
			break;
		}
		case 2:
		{
			c=a-b;
			printf("\nSubtraction = %d",c);
			break;
		}
		case 3:
		{
			c=a*b;
			printf("\nMultiplication = %d",c);
			break;
		}
		case 4:
		{
			c=a/b;
			printf("\nDivision = %d",c);
			break;
		}
		case 5:
		{
			c=a%b;
			printf("\nModulas = %d",c);
			break;
		}
			default:
		{
			printf("\nInvalide choice");
			break;
		}
	}
	return 0;
}