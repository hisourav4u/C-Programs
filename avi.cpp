#include<stdio.h>

main()
{
	int i, j;
	int t[]={6,7,4,6,9,7,6,2,4,3,4,1};
	int marks[11];
	
	for(i=0;i<11;i++)
	{
		marks[i]=0;
	}
	for(i=0;i<12;i++)
	{
		marks[t[i]]++;
		
		for(j=0;j<=10;j++)
		{
			printf("%d ",marks[j]);
		}
		printf("\n");
	}
}
