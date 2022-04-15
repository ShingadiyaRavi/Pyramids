/*
A
BA
ABA
BABA
ABABA
*/
#include<stdio.h>
int main()
{
 int num=5,r,c;
 char ch='A',st='B';

 for(r=1; r<=num; r++)
 {
  for(c=r; c>=1; c--)
  {
   if(c%2==0)
     printf("%c", st);
  else
     printf("%c", ch);
  }
  printf("\n");
 }
 return 0;
}