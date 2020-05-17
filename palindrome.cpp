#include<stdio.h>
int main()
{
	int x,y,c,temp;
	scanf("%d",&x);
	temp=x;
	for(;x>0;x=x/10)
	{
			y=x%10;
		c=c*10+y;
		//x=x/10;
	}
	
	if(temp==c)
	    {
		
		printf("it is a palindrome");
	}
	 
	 else
	        {
			
	 	printf("it is not a palindrome");
	 }
	 
}
