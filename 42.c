/*
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
 
    for(char i=ch;i>='A';i--){
        for(char j=i;j>='A';j--)
            printf("%c",j);
        printf("\n");
    }
}