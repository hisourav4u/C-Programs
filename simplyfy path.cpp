#include<stdio.h>
#include<string.h>
main()
{
	char str[100],str1[100]={};
	int i,j=0,slashcount=0,dotcount=0;
	
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='/')
		{
			if(i==strlen(str)-1)
				break;
			else if(slashcount==0)
			{
				slashcount=1;
				str1[j++]=str[i];
				continue;
			}
			else if(slashcount==1)
			{
				continue;
			}
		}
		if(str[i]=='.')
		{
			continue;
		}
		str1[j++]=str[i];
		slashcount=0;
	}
	for(i=strlen(str)-1;;i--)
	{
		if(str[i]!='/')
			break;
		else
			--j;
	}
	printf("%d\n",j);
	for(i=0;i<=j;i++)
	{
		printf("%c",str1[i]);
	}
}
