/*
     1
    1 1
   1 2 1
  1 3 3 1
*/
#include<stdio.h>
void main()
{
int x=1,n=4;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=x;k++){
            if(k%2!=0){
                if(k==1)
                    printf("1");
                else if(k==x)
                    printf("1");
                else    
                    printf("%d",i-1);
            }
            else
                printf(" ");
        }
        printf("\n");
        x=x+2;
    }
}



