#include <stdio.h>
int main()
{
	int x,n,fact=1;
	printf("Enter the Number\n");
	scanf("%d",&n);
	do
	{
	  fact=fact*x;
	}while(x<=n);
	printf("Factorial=%d",fact);
	x++;
}