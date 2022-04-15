/*
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<stdio.h>

void main()
{
 char ch;
 scanf("%c",&ch);
 if(ch>='a' && ch<='z')
    ch = ch-32;
 
    for(char i='A';i<=ch;i++){
        for(int j=ch-i;j>=1;j--)
            printf(" ");
        for(char k='A';k<=i;k++)
            printf("%c",k);
        for(char l=i-1;l>='A';l--)
            printf("%c",l);
        printf("\n");
    }
}