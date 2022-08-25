/*
nested for loop: 

*/
#include<stdio.h>
void main(){
    char ch='A';
    for (int row = 1; row<=5; row++)
    {
       for (int col = 1; col<=4; col++)
       {
        if(row==1||row==5||col==1||col==4){
        printf("%c",ch);
        ch++;
       }
    
       else
       {
         printf(" ");
         }
       }
 
       printf("\n");
       
    }

    
}