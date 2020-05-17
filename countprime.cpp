#include<stdio.h>
int main()
{
	int a,b,j,i,count=0,temp=0;
	scanf("%d",&a);
	scanf("%d",&b);

	for(i=a+1;i<b;i++)
	{
		if(i==2)
			continue;
		count=0;   
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			  count++;
			  if(count==2)
			  {
			  	printf("%d ",i);
				temp++;
		      }	
			}
			 	
		}
		
		
			
		
	} 
	printf("%d",temp);
	
}
