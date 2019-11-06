#include <stdio.h>
#include <stdlib.h>

int main()
{
	int height;
	printf("Enter height: ");
	scanf("%d",&height);
	for(int i=height-1;i>=0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf(" ");
		}
		for(int j=0;j<height;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


