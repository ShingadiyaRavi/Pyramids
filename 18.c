/*
123454321
 1234321
  12321
   121
    1
*/
#include<stdio.h>

void main()
{
 int n=5;
 for(int i=n;i>=1;i--){
     for(int l=n-i;l>=1;l--)
        printf(" ");
     for(int k=1;k<=i;k++)
        printf("%d",k);
     for(int j=i-1;j>=1;j--)
        printf("%d",j);
        
    printf("\n");
 }
}