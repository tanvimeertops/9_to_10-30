/*pointer :points to the address of variable*/
 /*WAP to find reverse of string using recursion */
#include<stdio.h>

void strrev_func(char *ch){ //*ch =string literal
if(*ch){
    strrev_func(ch+1);//hello
    printf("%c",*ch);//drwolh   
}
}
void main(){
//     int a=3;
// int *i=&a; //address of a is stored in i pointer
// printf("%d",*i);
char ch[100]="hello world";
strrev_func(ch);

}