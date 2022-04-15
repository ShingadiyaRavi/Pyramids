/*
1
22
333
4444
55555
4444
333
22
1
*/

#include <stdio.h>

void main() {
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}