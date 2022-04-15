//aa code ma pbm chhe...
/*
A B C D E D C B A
  B C D E D C B
    C D E D C
      D E D
        E
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
   
 for(r=ch; r>='A'; r--)
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