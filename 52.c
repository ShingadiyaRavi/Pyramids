/*
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
void main(){
    
    for(int i=5;i>=1;i--){
        for(int j=5-i;j>=1;j--)
            printf(" ");
        for(int k=i;k>=1;k--)
            printf("*");
        for(int l=i-1;l>=1;l--)
            printf("*");
        printf("\n");
    }
    
    for(int i=2;i<=5;i++){
        for(int j=5-i;j>=1;j--)
            printf(" ");
        for(int k=i;k>=1;k--)
            printf("*");
        for(int l=i-1;l>=1;l--)
            printf("*");
        printf("\n");
    }
}