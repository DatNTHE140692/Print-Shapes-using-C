#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("* ");		
		}
		for(int j=size-i;j>0;j--)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}


