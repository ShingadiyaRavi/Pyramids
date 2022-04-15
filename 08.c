/*
55555
44444
33333
22222
11111
*/

#include<stdio.h>

void main()
{
 int n=5;
 for(int i=n;i>=1;i--){
     for(int j=n;j>=1;j--)
        printf("%d",i);
    printf("\n");
 }
}