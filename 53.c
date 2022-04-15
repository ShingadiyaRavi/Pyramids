/*
33333
32223
32123
32223
33333
*/
#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
            printf("3");
    }
    printf("\n");
    for(int i=3;i<=3;i++){
        printf("%d",i);
    }
    for(int i=1;i<=3;i++)
        printf("2");
    for(int i=3;i<=3;i++){
        printf("%d",i);
    }
    
    printf("\n");
    for(int j=3;j>=1;j--){
        printf("%d",j);
    }
    for(int k=2;k<=3;k++)
        printf("%d",k);
        
    printf("\n");
    printf("3");
    for(int i=1;i<=3;i++)
        printf("2");
    printf("3");
    printf("\n");
    for(int i=1;i<=5;i++){
            printf("3");
    }
}