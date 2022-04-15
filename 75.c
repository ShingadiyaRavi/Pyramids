/*
1      a
21     ba
321    cba
4321   dcba
54321  edcba
*/
#include<stdio.h>
void main(){
    int n=7,c=1;
    char ch='E';
    
    if(ch>='A' && ch<='Z')
        ch=ch+32;
        
    for(char i='a';i<=ch;c++,n--,i++){ 
        
        
        for(int k=c;k>=1;k--){
            printf("%d",k);
        }
        for(int j=n;j>=1;j--)
            printf(" ");
  
        for(char j=i;j>='a';j--){
            printf("%c",j);
        }
        printf("\n");
    }
}
