/*
nested for loop: 

*/
#include<stdio.h>
void main(){
    char ch='a';
    for (int row = 1; row<=5; row++)
    {
       for (int col = 1; col<=4; col++)
       {
        if(row==1||row==5||col==1||col==4)
        printf("%c",ch);
           else
                printf(" ");    
        ch++;
       }
       printf("\n");
       
    }

    
}