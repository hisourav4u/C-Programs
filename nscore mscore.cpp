#include<stdio.h>
#include<string.h>

main()
{
	int t,i,j;
	scanf("%d",&t);
	int n[t], m[t], nscore[t], mscore[t], nmscore[t], res[t];
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		scanf("%d",&m[i]);
		scanf("%d",&nscore[i]);
		scanf("%d",&mscore[i]);
		scanf("%d",&nmscore[i]);
	}
	
	for(i=0;i<t;i++)
	{
		if((nmscore[i]>=nscore[i])&&(nmscore[i]>=mscore[i]))
		{
			if(n[i]<m[i])
			{
				res[i]=(nmscore[i]*2*n[i])+(m[i]-n[i])*mscore[i];
			}
			else if(n[i]>m[i])
			{
				res[i]=(nmscore[i]*2*m[i])+(n[i]-m[i])*nscore[i];
			}
			else
				res[i]=nmscore[i]*2*n[i];
		}
		
		else 
		
		{
			res[i]=(nscore[i]*n[i])+(mscore[i]*m[i]);
		}
		
		
	}
	
	for(i=0;i<t;i++)
	{
		printf("%d\n",res[i]);
	}
}
