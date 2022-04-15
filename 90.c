/*
#####*#####
####*#*####
###*###*###
##*#####*##
#*#######*#
*#########*
*/

#include<stdio.h>
void main(){
    int c=1;
    for(int i=1;i<=6;i++){
        for(int j=5;j>=i;j--){
            printf("#");
        }
        printf("*");
        for(int k=1;k<=c;k++)
            printf("#");
        printf("*");
        
        for(int j=5;j>=i;j--)
            printf("#");
        
        c=c+2;
        printf("\n");
    }
    
}