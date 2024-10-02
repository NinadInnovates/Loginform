#include <stdio.h>
int main()
{
	int i,j,n,c;
	printf("Enter the no.");
	scanf("%d",&n);
	printf("Prime nos.are:-\n");
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
		
		
			c++;
		}
		if(c==2)
		{
			printf("%d",i);
		}
		
	}
	
	
	
	
}