#include<stdio.h>
#include<string.h>
int called_function(int m,int n);
int main()
{
	int n,x;
	//printf("\nNow u r in calling function.. Lets call ather user defined function..");
	scanf("%d %d",&n,&x);
	called_function(n,x);

}

int called_function(int m, int n)
{
	
	printf("%d %d",m,n);
	
}
