/*
 A
 B B
 C C C
 D D D D
*/
#include<stdio.h>
void main()
{
    for(char i='A';i<='D';i++){
        for(char j='A';j<=i;j++){
            printf(" %C",i);
        }
            
        printf("\n");
    }
}


// ::::::::: OR :::::::::::::
    // ASCII code Start from 65 ...for Capital A to Z.
    for(int i=65;i<=68;i++){
        for(int j=65;j<=i;j++){
            printf(" %C",i);
        }
            
        printf("\n");
    }