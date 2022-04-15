/*
1
2  7
3  8 13
4  9 14 19 
5 10 15 20 25
*/
#include <stdio.h>

void main()
{
    int n;
    for(int i=1;i<=5;i++){
        for(int j=1,n=i;j<=i;j++,n=n+5)
            printf("%d ",n);

        printf("\n");
    }
}