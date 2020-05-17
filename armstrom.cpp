#include<stdio.h>
int main()
{
	int x,y,z,v,c,temp,a,b,res=0,rem;
	scanf("%d",&x);
	temp=x;
	for(;x>0;x=x/10)
	{
		y=x%10;
		res=res+y*y*y;
	//	x=x/10;
		
	}
	if(temp==res)
	{
		printf("true");
		
	}
	else
	{
		printf("false");
	}
}

