#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dl, db;
	scanf("%d%d",&dl,&db);
	for(int i=(dl-db)/2;i>=0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf(" ");
		}
		for(int j=0;j<db;j++)
		{
			printf("*");
		}
		db+=2;
		printf("\n");
	}
	return 0;
}


