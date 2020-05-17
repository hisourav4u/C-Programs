#include <stdio.h>
int chk(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if((num%i)==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num,prev,nxt,i;
    
    scanf("%d",&num);
    if((num==0)||(num==1))
    {
        printf("%d",2-num);
        return 0;
    }
    for(i=num;i>2;i--)
    {
        if(chk(i))
        {
            prev=i;
            break;
        }
    }
    
    for(i=num;;i++)
    {
        if(chk(i))
        {
            prev=i;
            break;
        }
    }
    
    if((num-prev)>=(nxt-num))
    {
        printf("%d",(nxt-num));
    }
    else
        printf("%d",(num-prev));
        
    return 0;
    
}

