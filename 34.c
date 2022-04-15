/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
#include<stdio.h>

void main()
{
 int n=5;
 for(int i=1;i<=n;i++){
     for(int l=n-i;l>=1;l--)
        printf("1");
     for(int k=1;k<=i;k++)
        printf("*");
     for(int j=i-1;j>=1;j--)
        printf("*");
        
    printf("\n");
 }
 for(int i=4;i>=1;i--){
     for(int l=n-i;l>=1;l--)
        printf("2");
     for(int k=1;k<=i;k++)
        printf("*");
     for(int j=i-1;j>=1;j--)
        printf("*");
        
    printf("\n");
 }
}