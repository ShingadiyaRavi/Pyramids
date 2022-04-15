/*
*000000
0*00000
00*0000
000*000
0000*00
00000*0
000000*
*/

#include<stdio.h>
void main(){
    int c=1;
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            
            if(j==i)
                printf("*");
            else
                printf("0");
        }
       printf("\n");
    }
    
    
}
