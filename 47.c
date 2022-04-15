/*
ABCDEFFEDCBA
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/
#include<stdio.h>

void main()
{
    char ch='f';
    if(ch>='a' && ch<='z')
        ch=ch-32;
    for(char i=ch;i>='A';i--){
        for(char k='A';k<=i;k++)
            printf("%c",k);
        for(char k=i;k>='A';k--)
            printf("%c",k);
        printf("\n");
    }
}