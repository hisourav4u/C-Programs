#include<stdio.h>
int arr[100001];
int current=0;

void chk(int x, int current1)
{
	if(x==current1)
	{
		for(int i=current1;i>0;i--)
		{
			if(arr[i])
			{
				printf("%d ",i);
				arr[i]=0;
				current=i-1;
			}
			else
				break;
		}
	}
}


main()
{
	int n;
	scanf("%d",&n);
	current=n;
	
	for(int i=0;i<n;i++)
	{
		int snack;
		scanf("%d",&snack);
		arr[snack]=1;
		chk(snack,current);
	
		
	}
	
	
}
