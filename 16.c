/*
12345
 1234
  123
   12
    1
*/
#include<stdio.h>

void main()
{
 int n=5;
 for(int i=n;i>=1;i--){
     for(int k=n-i;k>=1;k--)
        printf(" ");
     for(int j=1;j<=i;j++)
        printf("%d",j);
        
    printf("\n");
 }
}