/*
    1 
   2 3 
  4 5 6 
 7 8 9 10 
*/
#include <stdio.h>

void main()
{
    int c=0,n=7;
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<=n;k++)
            printf(" ");
        for(int j=1;j<=i;j++){
            c++;
            printf("%d",c);
            printf(" ");
        }
       
        printf("\n");
        n = n-1;
    }
}