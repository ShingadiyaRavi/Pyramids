/*
1
121
12321
1234321
123454321
*/
#include<stdio.h>
void main(){
    int c=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
            printf("%d",j);
            
        if(i>=2){
          for(int k=i-1;k>=1;k--)
            printf("%d",k);  
        }
       printf("\n");
    }
    
    
}
