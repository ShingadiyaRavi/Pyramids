/*
1
*2
1*3
*2*4
1*3*5
*/
#include<stdio.h>
void main(){
    
    for(int i=1;i<=5;i++){
        if(i%2==1){
            for(int j=1;j<=i;j++){
            if(j%2==1)
                printf("%d",j);
            else
                printf("*");
            }
        }
        else{
            for(int j=1;j<=i;j++){
            if(j%2==0)
                printf("%d",j);
            else
                printf("*");
            }
        }
        
            printf("\n");
    }
    
    
}
