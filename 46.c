/*
123456654321
1234554321
12344321
123321
1221
11
*/
#include<stdio.h>

void main()
{
    for(int i=6;i>=1;i--){
        for(int k=1;k<=i;k++)
            printf("%d",k);
        for(int k=i;k>=1;k--)
            printf("%d",k);
        printf("\n");
    }
}