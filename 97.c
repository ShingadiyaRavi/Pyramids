/*
@
#
@@
##
@@@
###
*/
#include <stdio.h>

void main()
{
    char ch='a';
    if(ch>='a' && ch<='z')
        ch=ch-32;
    int n=1;
        
    for(int i=1;i<=3;i++){
        for(int j=1;j<=2;j++){
            if(j%2==0){
                for(int j=1;j<=i;j++)
                    printf("#");
            }else{
                for(int j=1;j<=i;j++)
                    printf("@");
            }
            printf("\n");
            
            
        }
            
        ch++,n++;
        printf("\n");
    }
}