#include<stdio.h>
#include<string.h>

main()
{
	int t,i,sum=0,c=0,n,index=-1,x,freq[26]={0},freq1[26]={0};
	char t1[100000],t2[100000];
	scanf("%d",&t);
	int result[t];
	for(i=0;i<t;i++)
	{
		sum=0;
		index++;
		for(c=0;c<26;c++)
		{
			freq[c]=0;
			freq1[c]=0;
		}
		c=0;
		scanf("%d",&n);
	
		scanf("%s",t1);
		scanf("%s",t2);
		while(t1[c]!= '\0')
		{
			x=t1[c]-'a';
			freq[x]++;
			c++;
		}
		c=0;
		while(t2[c]!= '\0')
		{
			x=t2[c]-'a';
			freq1[x]++;
			c++;
		}
		
		for(c=0;c<26;c++)
		{
			if(freq[c]&&freq1[c])
			{
				sum+=freq[c]<=freq1[c]?freq[c]:freq1[c];
			}
			
		}
		result[index]=sum;
	}
	
	printf("%d",result[0]);
	for(i=1;i<=index;i++)
	{
		printf("\n%d",result[i]);
	}
}
