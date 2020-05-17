#include<stdio.h>
int main()
{
	int x,y,c=0,z;
	scanf("%d",&x);
for(;x>0;x=x/10)
	{
		y=x%10;
		c=c*10+y;
	//	x=x/10;
	
	}
	printf("reversed value is %d",c);
}
