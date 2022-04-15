/*
12321
12 21
1   1
12 21
12321
*/
#include <stdio.h>

void main()
{
    int n=3,p=3;
    for(int i=1;i<=n;i++,n--){
      for(int j=1;j<=2;j++){
          
        if(j==p){
            printf("1 ");
            break;
        }
            
        else
            printf("%d",j);
      }
        for(int s=i;s>1;s--)
            printf(" ");
        for(int k=n;k>=1;k--)
            printf("%d",k);
      
        printf("\n"); 
    }
    
    for(int i=1;i<=p;i++){
        if(i==1)
            printf("1 ");
        else
            printf("12");
            
        for(int s=p-1;s>=i;s--){
            printf(" ");
        }
        for(int j=i;j>=1;j--)
            printf("%d",j);
            
      
        printf("\n"); 
    }
}