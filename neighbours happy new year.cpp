#include<stdio.h>

int main()
{
	int t,i,j,k,count,max_so_far = 0, max_ending_here = 0, start =0, end = 0, s=0;
	scanf("%d",&t);
	int n[t],arr[t][10000],odd[t][10000],even[t][10000],sum,res[t],a=0,b=0,c=0,d=0,evensum,oddsum,startarr[t],endarr[t];
	char tmp[t];
	for(i=0;i<t;i++)
	{
		b=0,d=0;
		max_so_far = 0, max_ending_here = 0, start =0, end = 0, s=0;
		
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]<=0)
				continue;
				
			if(j%2)
				odd[i][b++]=arr[i][j];
			else
				even[i][d++]=arr[i][j];
		}
		
		
		
		for (k=0; k< b; k++ ) 
   		{ 
	        max_ending_here += odd[i][k]; 
	  
	        if (max_so_far < max_ending_here) 
	        { 
	            max_so_far = max_ending_here; 
	            start = s; 
	            end = k; 
	        } 
	  
	        if (max_ending_here < 0) 
	        { 
	            max_ending_here = 0; 
	            s = k + 1; 
	        } 
    	}
		oddsum=max_so_far;
		int start1=start, end1=end; 
		max_so_far = 0, max_ending_here = 0, start =0, end = 0, s=0;
		
		for (k=0; k< d; k++ ) 
   		{ 
	        max_ending_here += even[i][k]; 
	  
	        if (max_so_far < max_ending_here) 
	        { 
	            max_so_far = max_ending_here; 
	            start = s; 
	            end = k; 
	        } 
	  
	        if (max_ending_here < 0)
	        { 
	            max_ending_here = 0; 
	            s = k + 1; 
	        } 
    	}
		evensum=max_so_far;
		
		
		if(evensum>oddsum)
		{
			startarr[i]=start;
			endarr[i]=end;
			tmp[i]='e';
		}
		
		else if(oddsum>evensum)
		{
			startarr[i]=start1;
			endarr[i]=end1;
			tmp[i]='o';
		}
		
		else
		{
			for(a=end,b=end1;a>=start&&b>=start1;a--,b--)
			{
				if(odd[i][b]>even[i][a])
				{
					startarr[i]=start1;
					endarr[i]=end1;
					tmp[i]='o';
					break;
				}
				else if(odd[i][b]<even[i][a])
				{
					startarr[i]=start;
					endarr[i]=end;
					tmp[i]='e';
					break;
				}
				else
					continue;
			}
		}
		
	}
	
	for(i=0;i<t;i++)
	{
		if(tmp[i]=='e')
		for(k=endarr[i];k>=startarr[i];k--)
			printf("%d",even[i][k]);
		else
		for(k=endarr[i];k>=startarr[i];k--)
			printf("%d",odd[i][k]);
			
		printf("\n");
	}
	
	
}
