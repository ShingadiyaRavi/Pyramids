/*
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<stdio.h>

void main()
{
 char ch,r,c;
 int sp;
 printf("Enter character : ");
 scanf("%c",&ch);
 
 if(ch>='a' && ch<='z')
   ch=ch-32;
   
 for(r='A'; r<=ch; r++)
 {
   for(sp=ch-r; sp>=1; sp--)
       printf(" ");
   for(c='A'; c<=r; c++)
       printf("%c",c);
   for(c=r-1; c>='A'; c--)
       printf("%c",c);
   printf("\n");
 }

}