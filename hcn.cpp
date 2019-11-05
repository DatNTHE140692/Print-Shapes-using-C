#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cd,cr;
	scanf("%d%d",&cd,&cr);
	for(int i=0;i<cd;i++)
	{
		for(int j=0;j<cr;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


