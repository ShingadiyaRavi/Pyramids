/*
1
01
101
0101
10101
*/
#include<stdio.h>
void main(){
    int c;
        
    for(char i=1;i<=5;i++){
         for(int k=1;k<=i;k++){
            if(i%2==0){
                c=k%2==0?1:0;
                printf("%d",c);
            }
            else{
                c=k%2==0?0:1;
                printf("%d",c);
            }
        }  
        printf("\n");
    }
}
