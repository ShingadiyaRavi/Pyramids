/*
9
898
78987
6789876
*/
#include<stdio.h>
void main(){
    
    for(int i=9;i>=6;i--){
        for(int j=i;j<=9;j++)
            printf("%d",j);
        for(int l=8;l>=i;l--)
            printf("%d",l);
        printf("\n");
    }
}