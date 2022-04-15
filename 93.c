/*
9 
8  6
7  5  3
4  2  0 -2
1 -1 -3 -5 -7
*/
#include<stdio.h>
void main(){
    
    int n=9,num=0,n2=2;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            
            if(i==4){
                printf("%d ",n-n2);
                n2=n2+2;
            }
            else if(i==5){
                n2=n2+2;
                printf("%d ",n-n2);
            }
            else{
                printf("%d ",n-num);
                num = num+2;
            }
        }
        n=n-1;
        num=0;
        n2=2;
        printf("\n");
    }
}