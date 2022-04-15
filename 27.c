/*
A
BB
CCC
DDDD
CCC
BB
A
*/
#include <stdio.h>

void main() {
    char ch;
    if(ch>='a'&& ch<='z')
        ch=ch-32;
        
    for(char i='A';i<='D';i++){
        for(char j='A';j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
    for(char i='C';i>='A';i--){
        for(char j='A';j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
}