/*
1
A B
2 3 4
C D E F
5 6 7 8 9
*/
#include<stdio.h>
void main(){
    char ch='a';
    int c=1;
    if(ch>='a' && ch<='z')
        ch=ch-32;
    
    for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                if(i%2==1)
                    printf("%d ",c++);
                else
                    printf("%c ",ch++);
            }
        
            printf("\n");
    }
    
}
