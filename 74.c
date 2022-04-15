/*
1333
2222
3331
*/
#include<stdio.h>
void main(){
    int n=3;
    for(int i=1;i<=3;i++,n--){   
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        for(int k=1;k<=n;k++)
            printf("%d",n);
        printf("\n");
    }
}
