#include <stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("Enter Marix Elements \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix Elements are:-\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix is:-\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
	
