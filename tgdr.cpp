#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	scanf("%d",&size);
	for(int i=size-1;i>=0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf(" ");
		}
		for(int j=0;j<size-i;j++)
		{
			if(i!=0 && j > 0 && j < size-i-1) printf("  ");
			else printf("* ");
		}
		printf("\n");
	}
	return 0;
}


