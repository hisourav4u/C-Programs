#include<stdio.h>

main()
{
	long int n,m;
	scanf("%ld %ld",&n,&m);
	
	long int arr[n+1],type,start,end,i,j,var;
	
	for(i=1;i<=n;i++)
	{
		scanf("%ld",&arr[i]);
	}
	
	for(j=0;j<m;j++)
	{
		scanf("%ld",&type);
		scanf("%ld",&start);
		scanf("%ld",&end);
		
		long int tmp[end-start],index=1;
		
		if(type==1)
			{
				for(i=start;i<=end;i++)
				{
					tmp[index++]=arr[i];
				}
				
				for(i=start-1;i>=1;i--)
				{
					arr[i+(end-start+1)]=arr[i];
				}
				var=end-start+1;
				for(i=index-1;i>=1;i--)
				{
					arr[var--]=tmp[i];
				}
					
			}
		else
			{
				for(i=start;i<=end;i++)
				{
					tmp[index++]=arr[i];
				}
				
				for(i=end+1;i<=n;i++)
				{
					arr[i-(end-start+1)]=arr[i];
				}
				
				
				var=n;
				for(i=index-1;i>=1;i--)
				{
					arr[var--]=tmp[i];
				}
			
			}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%ld ",arr[i]);
	}
}
