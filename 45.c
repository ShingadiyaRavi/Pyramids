/*
    1
   123
  12345
 1234567
123456789
*/
#include<stdio.h>

void main()
{
    for(int i=1;i<=5;i++){
        for(int j=5-i;j>=1;j--)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
            printf("%d",k);
        printf("\n");
    }
}