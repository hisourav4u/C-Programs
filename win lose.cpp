#include<stdio.h>
#include<string.h>

int main()
{
	int t,i,strength[1000],energy[1000],j,k,tmp,count;
	scanf("%d",&t);
	char res[t][5];
	int n[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
			scanf("%d",&strength[j]);
		for(j=0;j<n[i];j++)
			scanf("%d",&energy[j]);
			
		
		for(j=0;j<n[i]-1;j++)
		{
			
			for(k=j+1;k<n[i];k++)
			{
				if(strength[k]>strength[j])
				{
					tmp=strength[j];
					strength[j]=strength[k];
					strength[k]=tmp;
				}
			}
		}
		
		for(j=0;j<n[i]-1;j++)
		{
			
			for(k=j+1;k<n[i];k++)
			{
				if(energy[k]>energy[j])
				{
					tmp=energy[j];
					energy[j]=energy[k];
					energy[k]=tmp;
				}
			}
		}
		count=0;
		for(k=0;k<n[i];k++)
		{
			if(strength[k]<=energy[k])
			{
				count++;
				continue;
			}
			else
				break;
		}
		if(count==n[i])
			strcpy(res[i],"WIN");
		else
			strcpy(res[i],"LOSE");
	}
	
	for(i=0;i<t;i++)
	{
		puts(res[i]);
		
	}
}
