/*
1
1 4 9
1 4 9 16 25
1 4 9 16 25 36 49
1 4 9 16 25 36 49 64 81
*/
#include <stdio.h>

void main()
{
    int n=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",j*j);
        }
        n=n+2;
        printf("\n");
    }
}