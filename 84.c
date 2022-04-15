/*
 1
 23
 4
 56
 7
 89
 10
*/
#include<stdio.h>
void main(){
    int c=1;
    for(int i=1;i<=7;i++){
        
        if(i%2==0){
           for(int j=1;j<=2;j++,c++)
            printf("%d",c);
        }else{
            for(int j=1;j<=1;j++,c++)
            printf("%d",c);
        }
       printf("\n");
    }
    
    
}
