/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
*/
#include<stdio.h>
void main(){
    int c=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=c;j++){
            if(j%2==1)
                printf("%d",i);
            else
                printf("*");
        }
        c=c+2;
       printf("\n");
    }
    
    for(int i=4;i>=1;i--){
        for(int j=1;j<=c-2;j++){
            if(j%2==1)
                printf("%d",i);
            else
                printf("*");
        }
        c=c-2;
       printf("\n");
    }
    
    
}
