/*
    A
   AB
  ABC
 ABCD
ABCDE
 ABCD
  ABC
   AB
    A
*/
#include<stdio.h>

void main()
{
 char ch='e';
 if(ch>='a' && ch<='z')
    ch = ch-32;
 
    for(char i='A';i<=ch;i++){
        for(int j=ch-i;j>=1;j--)
            printf(" ");
        for(char k='A';k<=i;k++)
            printf("%c",k);
        printf("\n");
    }
    for(char i=ch-1;i>='A';i--){
        for(int j=ch-i;j>=1;j--)
            printf(" ");
        for(char k='A';k<=i;k++)
            printf("%c",k);
        printf("\n");
    }
}

// ........OR..........
/*
    A
   AB
  ABC
 ABCD
ABCDE
 ABCD
  ABC
   AB
    A
*/
#include<stdio.h>

void main()
{
 char ch[5]={'A','B','C','D','E'};
 
 
    for(int i=1;i<=5;i++){
        for(int j=5-i;j>=1;j--)
            printf(" ");
        for(int k=0;k<i;k++)
            printf("%c",ch[k]);
        printf("\n");
    }
    for(int i=4;i>0;i--){
        for(int j=5-i;j>=1;j--)
            printf(" ");
        for(int k=0;k<i;k++)
            printf("%c",ch[k]);
        printf("\n");
    }
}