/*
*********
*******
*****
***
*
*/
#include<stdio.h>
void main(){
    int n=9;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=n;j++)
            printf("*");
        n=n-2;
        printf("\n");
    }
}