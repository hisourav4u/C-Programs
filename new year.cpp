#include<stdio.h>
main()
{
	int t,i,j,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int ticket[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&ticket[j]);
			if(ticket[j]==0)
			{
				j--;
			}
		}
		
		int inarr[n];
		int in=ticket[0];
		inarr[0]=in;
		int ex=0,incount=0,excount=0;
		int ex_new,k;
		for(k=1;k<n;k++)
		{
			ex_new=(in>ex)?in:ex;
					
			
			in=ex+ticket[k];
		
				ex=ex_new;
			if(in>ex)
				                 
								 			else
				--incount;
			
		}
	for(k=0;k<incount;k++)
		printf("%d ",inarr[k]);
	}
}
