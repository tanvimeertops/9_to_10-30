/*
nested for loop: 

*/
#include<stdio.h>
void main(){
    for (int row = 1; row<=4; row++)
    {
       for (int space = 4; space>=row; space--)
       {
        printf(" ");
       }
        
       for (int col =1; col<=row*2-1; col++)
       {
        printf("*");
        
       }
 
       printf("\n");
       
    }

    
}