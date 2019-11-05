#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int size;
	printf("Enter size: ");
	scanf("%d",&size);
	char a[size];
	for(int i=0;i<size;i++)
	{
		a[i] = ' ';
	}
	a[size] = '\0';
	char b[size];
	for(int i=0, j = size - 1;i<size;i++,j--)
	{
		strcpy(b,a);
		b[i] = '*';
		b[j] = '*';
		puts(b);
	}
	return 0;
}


