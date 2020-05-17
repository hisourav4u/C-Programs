#include<stdio.h>

main()
{
	int a,b,i,j,k,l,count=0,limit;
	j=0;
	k=0;

	scanf("%d %d",&a,&b);
	int arr1[a],arr2[b];
	
	if(a<b)
		limit=a;
	else
		limit=b;
	
	for(i=1;i<=limit;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			count++;
		}
	
	}
	
	
	
	printf("%d",count);
}
