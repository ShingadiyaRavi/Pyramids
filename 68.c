/*
1234
2341
3412
4123
*/
#include<stdio.h>
void main(){
    int x=1;
    for(int i=1;i<=4;i++){
        
        for(int j=i;j<=4;j++)
            printf("%d",j);
        for(int k=1;k<i;k++)
            printf("%d",k);
        printf("\n");
    }
}