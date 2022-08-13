//greatest of 3 no.
//nested if.
#include<stdio.h>
void main(){
    int a=1,b=5,c=20;
    if (a > b)
    {
        if(a>c)
        printf("A is greater");
        else
        printf("C is greater");
    }
    else
    {
         if(b>c)
        printf("B is greater");
        else
        printf("c is greater");

    }
}