/*
4572
572
72
2
*/
#include<stdio.h>
void main(){
    
int n[4]={4,5,7,2};

for(int i=0;i<4;i++){
    
    for(int j=i;j<4;j++){
        printf("%d",n[j]);
    }
    printf("\n");
}
}