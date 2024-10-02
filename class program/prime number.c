#include <stdio.h>
int main ()
{
	int x,n,count=0;
	printf("Enter the Number\n");
	scanf("%d",&n);
	do
	{
		if (n%x==0)
		{
			count=count+1;
			x++;
		}
	}
	while(x<=n);
	 
	if(count=2)
	{
		printf("%d is prime number",n);
	}
	else 
	{
		printf(" %d is not a prime number");
	}

	

}
