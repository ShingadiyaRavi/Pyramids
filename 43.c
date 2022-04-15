/*
9
0 1
2 3 4
5 6 7 8
9 0 1 2 3
*/
#include<stdio.h>
void main()
{
 int x=0,n=4;
 
 
 printf("9\n");
 
 for(int r=1;r<=n;r++)
 {
    for(int c=0; c<=r; c++,x++)
    {
        if(x<10)
            printf("%d ",x);
        else
        {
        for(int i=0; i<=n-1; i++)
            printf("%d ",i);
        break;
        }
    }
  printf("\n");
 }
}
