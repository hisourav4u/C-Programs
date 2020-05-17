#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int arr[n+1]={0},i,j,count=0,max=0,a[m],b[m],k[m];
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		scanf("%d",&k[i]);
		
		for(j=a[i];j<=b[i];j++)
		{
			arr[j]+=k[i];
			if(max<arr[j])
			{
				max=arr[j];
			}
		}
	}
	
	printf("%d",max);
	
	
}
