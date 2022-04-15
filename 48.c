/*
    1
   222
  33333
 4444444
555555555
*/
#include<stdio.h>
void main(){
    
    for(int i=1;i<=5;i++){
        for(int j=5-i;j>=1;j--)
            printf(" ");
        for(int k=i;k>=1;k--)
            printf("%d",i);
        for(int l=1;l<=i-1;l++)
            printf("%d",i);
        printf("\n");
    }
}