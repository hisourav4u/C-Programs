#include<stdio.h>

main()
{
	float arr[100],n,sum=0;
	
	printf("Enter the number of integers: ");
	scanf("%f",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	printf("Average of entered numbers is %f",sum/n);
	
	
}
