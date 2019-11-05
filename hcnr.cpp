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
			if(i==0 || i==cd-1) 
			{
				printf("*");
			}
			else
			{
				if(j > 0 && j<cr-1) printf(" ");
				else printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}


