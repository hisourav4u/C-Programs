#include<stdio.h>
int flip(int n,int b)
{
	return (n ^ (1<<b));
}
int chkset(int n, int b)
{
	if(n && (1<<b))
		return 1;
	else
		return 0;
		
}

main()
{
	int n,q,type,index,bit,i,j,count=0;
	scanf("%d %d",&n,&q);
	int arr[100000]={0},store[100000],tmp=-1;
	
	for(i=0;i<q;i++)
	{
		scanf("%d %d %d",&type,&index,&bit);
		
		if(type==1)
		{
			arr[index]=flip(arr[index],bit);
		
		}
		else if(type==2)
		{
			for(j=index;j>=0;j--)
			{
				if(chkset(arr[j],bit))
					count++;
			}
			store[++tmp]=count;
			count=0;
		}
	}
	
	for(i=0;i<=tmp;i++)
	{
		printf("%d\n",store[i]);
	}
	
}
