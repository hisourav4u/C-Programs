#include<stdio.h>

main()
{
	int n,i,j,start,end,brk=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			//printf("arr[j]=%d arr[i]=%d\n",arr[j],arr[i]);
			if(arr[j]>=arr[i])
				continue;
			else
			{
				brk=1;
				start=i;
				break;
			}
		}
		if(brk)
			break;
	}
	//printf("start=%d end=%d\n",start,end);
	brk=0;
	for(i=n-1;i>0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<=arr[i])
				continue;
			else
			{
				brk=1;
				end=i;
				break;
			}
		}
		if(brk)
			break;
	}
	//printf("start=%d end=%d\n",start,end);
	for(i=start;i<=end;i++)
	{
		printf("%d ",arr[i]);
	}
}
