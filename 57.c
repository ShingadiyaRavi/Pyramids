/*
 1 
 3 5 7
 9 11 13 15 17 19
*/
#include<stdio.h>
void main(){
    int z=1;
    
 printf(" 1 \n");
 
 for(int i=1; i<=2; i++)
 {
  for(int j=1; j<=i*3; j++){
      z=z+2;
     printf(" %d",z);
  }
  
  printf("\n");
 }
}