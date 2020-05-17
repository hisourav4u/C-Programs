#include<stdio.h>

long int findmax(long int arr[],long int i,long int j)
{
	long int k, max=arr[i];
	for(k=i+1;k<=j;k++)
	{
		if(arr[k]>max)
			max=arr[k];
		
	}
	return max;
}

main()
{
	long int n,max,count=0;
	scanf("%ld",&n);
	
	long int a[n],i,j;
	
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			max=findmax(a,i,j);
			if(a[i]*a[j]<=max)
				count++;
		}
	}
	
	printf("%ld",count);
}
