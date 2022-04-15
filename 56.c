/*
**********
****  ****
***    ***
**      **
*        *
*/
#include<stdio.h>
void main(){
    int c=0;
    for(int i=5;i>=1;i--){
        c++;
        for(int j=1;j<=i;j++)
            printf("*");
        for(int s=c;s>=2;s--)
            printf(" ");
        for(int s=2;s<=c;s++)
            printf(" ");
        for(int k=i;k>=1;k--)
            printf("*");
        
        printf("\n");
    }
}