/*
     5
    454
   34543
  2345432
 123454321
*/

#include <stdio.h>

void main()
{
    
    
 int n=5,c;
 for(int i=1;i<=n;i++){
    for(int j=n-i;j>=1;j--)
        printf(" ");
    for(int k=n-i+1;k<=n;k++)
        printf("%d",k);
    for(int t=1,c=n-1;t<i;t++,c--)
        printf("%d",c);
        
    printf("\n");
 }
 
 
}