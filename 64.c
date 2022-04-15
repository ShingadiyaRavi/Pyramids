/*
1
232
34543
4567654
*/

// Code BY DIPEN SIR...
#include <stdio.h>

void main()
{
    int x,t,n=0;
    for(int i=1;i<=4;i++){
        t=n;
        for(int j=i,x=i;j>=1;j--,x++)
            printf("%d",x);
            
            
        for(int k=i;k>=2;k--,t--)
            printf("%d",t);
        n=n+2;
        
        printf("\n");
    }
}