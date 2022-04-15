/*
ABCD
BCDA
CDAB
DABC
*/
#include<stdio.h>
void main(){
    char ch='d';
    
    if(ch>='a' && ch<='z')
        ch=ch-32;
    for(char i='A';i<=ch;i++){
        
        for(char j=i;j<=ch;j++)
            printf("%c",j);
        for(char k='A';k<i;k++)
            printf("%c",k);
        printf("\n");
    }
}
