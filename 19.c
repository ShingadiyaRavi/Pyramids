/*
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>

void main()
{
 int n=5,c=1;
 for(int i=1;i<=n;i++){
     for(int l=n-i;l>=1;l--)
        printf(" ");
   //   for(int k=1;k<=c;k++)
   //      printf("%d",k);

      for(int k=1;k<=c;k++)
        printf("*");
   //   for(int j=i-1;j>=1;j--)
   //      printf("%d",j);
   c=c+2;
    printf("\n");
 }
}