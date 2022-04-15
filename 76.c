/*
1
01
010
1010
10101
*/
#include<stdio.h>
void main(){
    int c=1;
        
    for(char i=1;i<=5;i++){
        
        for(int k=1;k<=i;k++){
          printf("%d",c);
            if(c==1)
                c=0;
                 
            else
                c=1;
            
        }
        printf("\n");
    }
}
