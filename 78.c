/*
 ***** 
*     *
*     *
 *****
*/
#include<stdio.h>
void main(){
    int c;
        
    for(int i=1;i<2;i++){
        for(int j=1;j<8;j++){
            if(j==1 || j==7)
                printf(" ");
            else
                printf("*");
        }
            printf("\n");
    }
    
    for(int i=1;i<=2;i++){
        for(int k=1;k<=7;k++){
            if(k==1 || k==7)
                printf("*");
            else
                printf(" ");
        }
            
        printf("\n");
    }
    for(int i=1;i<2;i++){
        for(int j=1;j<8;j++){
            if(j==1 || j==7)
                printf(" ");
            else
                printf("*");
        }
            printf("\n");
    }
    
}
