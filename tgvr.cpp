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
			if(i != size-1 && j>0 && j<=i-1)
			{
				printf("  ");
			}
			else printf("* ");
		}
		for(int j=0;j<size-i;j++)
		{
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}


