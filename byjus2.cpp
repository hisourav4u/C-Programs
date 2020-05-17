#include<stdio.h>
#include<math.h>

main()
{
	int n,u,v,t,i,power,index=-1,tmp,sum,count=0;
	scanf("%d",&t);
	int result[t];
	for(i=0;i<t;i++)
	{
		sum=0;
		index++;
		power=-1;
		scanf("%d %d %d",&n,&u,&v);
		
		if((abs(u-v))%3!=0)
			result[index]=-1;
		else
		{
			tmp=abs(u-v);
			do
			{
				power++;
				sum+=power*(tmp%3);
				tmp/=3;
			}while(tmp);
		}
		result[index]=sum;

	}
	printf("%d",result[0]);
	for(i=1;i<=index;i++)
	{
		printf("\n%d",result[i]);
	}
	
}
