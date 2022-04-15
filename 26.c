/*
I
IN
IND
INDI
INDIA
INDIA
INDI
IND
IN
I
*/
#include<stdio.h>
void main(){
    
char n[5]={'I','N','D','I','A'};


for(int i=0;i<5;i++){
    
    for(int j=0;j<=i;j++){
        printf("%c",n[j]);
    }
    printf("\n");
}
for(int i=4;i>=0;i--){
    
    for(int j=0;j<=i;j++){
        printf("%c",n[j]);
    }
    printf("\n");
}
}