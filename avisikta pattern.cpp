#include<stdio.h>

main()
{
	int i,j,k;
	for(i=1;i<4;i++)
	{
		for(j=0;j<1*i;j++)
			printf(" ");
		for(k=0;k<=9-2*i;k++)
			printf("*");
		printf("\n");
	}
}
