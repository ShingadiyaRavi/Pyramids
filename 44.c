/*
12344321
123__321
12____21
1______1
*/

#include<stdio.h>
void main(){
    int c=0;
    for(int i=4;i>=1;i--){
        c++;
        for(int j=1;j<=i;j++)
            printf("%d",j);
        for(int l=c;l>=2;l--)
            printf("_");
        for(int l=2;l<=c;l++)
            printf("_");
        for(int t=i;t>=1;t--)
            printf("%d",t);
            
    printf("\n");
    }           
}