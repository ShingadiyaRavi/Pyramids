/*
7
14 15
28 29 30 31
56 57 58 59 60 61 62 63
*/

#include<stdio.h>
void main(){
    int c=1,n;
    for(int i=1;i<=4;i++){
        n=c*7;
        for(int j=1;j<=c;j++){
            printf("%d ",n++);
        }
        c=c*2;
        printf("\n");
    }
    
}