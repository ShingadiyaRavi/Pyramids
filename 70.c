/*
1234
341
12
3
*/
#include <stdio.h>

void main()
{
    
    for(int i=4;i>=1;i--){
        int n=1,k=3;
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%d",n);
                n++;
            }
            else{
                printf("%d",k);
                if(k==4){
                    k=1;
                }else{
                    k++;
                }
            }
        }
    printf("\n");
    }

    
}