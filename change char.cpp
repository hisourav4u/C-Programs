#include<stdio.h>
#include<string.h>
main()
{
	int i=0;
	char ch1,ch2,str[100];
	gets(str);
	scanf("%c %c",&ch1,&ch2);	
	while(i<strlen(str))
	{
		char c=str[i];
		if(c==ch1)
		{
			str[i]=ch2;		
		}
		if(c==ch2)
		{
			str[i]=ch1;	
		}
		i++;
	}
	puts(str);
}
