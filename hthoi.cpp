#include <stdio.h>

int main()
{
	int size;
	printf("Enter size: ");
	scanf("%d",&size);
	for(int i=size-1;i>=0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf(" ");
		}
		for(int j=0;j<size-i;j++)
		{
			printf("*");
		}
		for(int j=size-i-1;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<=size-2;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(int j=size-i-1;j>0;j--)
		{
			printf("*");
		}
		for(int j=0;j<size-i-2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
