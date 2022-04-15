/*
A
BA
CBA
DCBA
EDCBA
DCBA
CBA
BA
A
*/
#include<stdio.h>
void main()
{
 char ch;
 scanf("%c",&ch);
 if(ch>='a' && ch<='z')
    ch = ch-32;
    for(char i='A';i<=ch;i++){
        for(char k=i;k>='A';k--)
            printf("%c",k);
        printf("\n");
    }
    for(char i=ch-1;i>='A';i--){
        for(char k=i;k>='A';k--)
            printf("%c",k);
        printf("\n");
    }
}