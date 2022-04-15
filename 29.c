/*
 123454321
  2345432
   34543
    454
     5
*/
#include <stdio.h>

void main() {
        
    int n=5;
    for(int i=1;i<=n;i++){
        for(int l=i;l>=1;l--)
            printf(" ");
        for(int k=i;k<=n;k++)
            printf("%d",k);
        for(int j=n-1;j>=i;j--)
            printf("%d",j);
        
    printf("\n");
 }
}