#include<stdio.h>

  
int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = 0, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  
main() 
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i,tmp,max=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&tmp);
		arr[i]=tmp;
		
	}
	for(i=0;i<n;i++)
	{
		arr[i]*=arr[i];
		tmp=maxSubArraySum(arr,n);
		arr[i]/=arr[i];
		if(tmp>=max)
		{
			max=tmp;
		}
		
	}
	printf("%d",max);
}
