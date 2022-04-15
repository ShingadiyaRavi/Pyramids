/*
1
AB
123
ABCD
12345
*/
#include<stdio.h>
void main(){
    
    for(int i=1; i<=5; i++)
    {
        if(i%2==1){
            for(int j=1; j<=i;j++){
                printf("%d",j);
            }
        }
        else{
            char ch='A';
            for(int k=1;k<=i;k++,ch++){
                printf("%c",ch);
            }
        }
        printf("\n");
    }
}