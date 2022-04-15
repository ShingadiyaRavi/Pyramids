/*
1
123
12345
1234567 
*/
#include<stdio.h>
void main(){
    
    int x=1;
    for(int i=1;i<=4;i++){
        
        for(int j=1;j<=x;j++){
            printf("%d",j);
        }
        x=x+2;
        printf("\n");
    }
}