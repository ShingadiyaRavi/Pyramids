/*
54321
 4321
  321
   21
    1
*/
#include <stdio.h>

void main() {
        
    for(int i=5;i>=1;i--){
        for(int l=5-i;l>=1;l--)
            printf(" ");
        for(int j=i;j>=1;j--)
            printf("%d",j);
        
        
    printf("\n");
 }
}