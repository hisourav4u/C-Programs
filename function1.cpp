#include<stdio.h>

int z;
int add(int z, int y)
{
	//printf("Function called.");
	return z+y;
	
}

int sub(int z, int y)
{
	return z-y;
}

main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	int ch;
	
	printf("1.Add\n2.Subtraction\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	printf("%d",&add(a,b));
				break;
		case 2:	printf("%d",sub(a,b));
				break;
	}
}
