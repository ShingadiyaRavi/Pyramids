/*
******
*    *
*    *
******
*/
#include<stdio.h>
void main(){
    
    for(int i=1;i<2;i++){
        for(int j=1;j<=6;j++){
                printf("*");
        }
            printf("\n");
    }
    
    for(int i=1;i<=2;i++){
        for(int k=1;k<=6;k++){
            if(k==1 || k==6)
                printf("*");
            else
                printf(" ");
        }
            
        printf("\n");
    }
    for(int i=1;i<2;i++){
        for(int j=1;j<=6;j++){
                printf("*");
        }
            printf("\n");
    }
    
}
