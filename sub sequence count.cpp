#include<stdio.h>

main()
{
	int n,k,i,j,chk,count=0;
	scanf("%d %d",&n,&k);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<=k)
			count++;
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[j]>arr[i])
				chk=arr[j]-arr[i];
			else
				chk=arr[i]-arr[j];
			
			if(chk<=k)
				count++;
		}
	}
	printf("%d",count);
}
