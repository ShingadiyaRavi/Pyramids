/*
1
2 3
4 5 6
7 8 9 1
2 3 4 5 6
*/
#include <stdio.h>

void main()
{
    int n=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(n==9){
                printf("%d",n);
                n=1;
            }
            else
                printf("%d",n++);
        }
    printf("\n");
    }
}