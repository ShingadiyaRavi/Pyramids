/*
ABCD
CDA
AB
C
*/
#include <stdio.h>

int main()
{
    char ch='d';
    if(ch>='a' && ch<='z')
        ch=ch-32;
    for(char i=ch;i>='A';i--){
        char n='A',k='C';
        for(char j='A';j<=i;j++){
            if(i%2==0){
                printf("%c",n);
                n++;
            }
            else{
                printf("%c",k);
                if(k=='D'){
                    k='A';
                }else{
                    k++;
                }
            }
        }
    printf("\n");
    }

    return 0;
}