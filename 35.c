/*
	  1
    212
   32123
  4321234
   32123
    212
     1
*/
#include<stdio.h>

void main()
{
 int n=4;
 for(int i=1;i<=n;i++){
     for(int l=n-i;l>=1;l--)
        printf(" ");
     for(int k=i;k>=1;k--)
        printf("%d",k);
     for(int j=2;j<=i;j++)
        printf("%d",j);
        
    printf("\n");
 }
 for(int i=4;i>=1;i--){
     for(int l=n-i;l>=1;l--)
        printf(" ");
     for(int k=i;k>=1;k--)
        printf("%d",k);
     for(int j=2;j<=i;j++)
        printf("%d",j);
        
    printf("\n");
 }
}