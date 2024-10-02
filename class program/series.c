#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the number to print series=");
	scanf("%d",&n);
	for(i=n;i<=n*10;i=i+n)
	{
		printf("%d\n",i);
	}
}
