/*
          1
         2 2
        3 3 3
       4 4 4 4
      5 5 5 5 5
     6 6 6 6 6 6
*/

#include <stdio.h>

void main()
{
    int n=6;
    for(int i=1;i<=6;i++){
        for(int k=1;k<=n;k++)
            printf(" ");
        for(int j=1;j<=i;j++){
            printf("%d",i);
            printf(" ");
        }
       
        printf("\n");
        n = n-1;
    }
}