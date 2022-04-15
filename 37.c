/*
   A
  ABA
 ABCBA
ABCDCBA
 ABCBA
  ABA
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
     for(int l=ch-i;l>=1;l--)
        printf(" ");
     for(char k='A';k<=i;k++)
        printf("%c",k);
     for(char j=i-1;j>='A';j--)
        printf("%c",j);
        
    printf("\n");
 }
 for(char i=ch-1;i>='A';i--){
     for(int l=ch-i;l>=1;l--)
        printf(" ");
     for(char k='A';k<=i;k++)
        printf("%c",k);
     for(char j=i-1;j>='A';j--)
        printf("%c",j);
        
    printf("\n");
 }
}