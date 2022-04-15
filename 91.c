/*
543212345
 4321234
  32123
   212
    1
*/

#include<stdio.h>
void main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int s=n-i;s>=1;s--)
            printf(" ");
        
        for(int j=i;j>=1;j--)
            printf("%d",j);
        for(int k=2;k<=i;k++)
            printf("%d",k);
        
        printf("\n");
    }
    
}