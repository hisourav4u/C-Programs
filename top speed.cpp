#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>




void solve (int* s,int n) {
    
    int i,j,res[n];
    
    
    int index=-1,count=0;
    for(j=0;j<n;j++)
    {
        index++;
        count=0;
        for(i=j+1;i<n;i++)
        {        
            if((*(s+j))>(*(s+i)))
                count++;
        }
        
        res[index]=count;
        
    }
    
   printf("%d", res[0]);
        for(int i_out_=1; i_out_<n; i_out_++)
        	printf(" %d", res[i_out_]);
       
   
   
}

int main() {
    int out_n;
    int T;
    scanf("%d", &T);
    for(int t_i=0; t_i<T; t_i++)
    {   int n;
     
        scanf("%d", &n);
        int i_S;
        int *S = (int *)malloc(n*sizeof(int));
        for(i_S=0; i_S<n; i_S++) 
           scanf("%d", &S[i_S]);
        solve(S,n);
        printf("\n");
        
    }
}
