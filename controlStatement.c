/* control statement
whenever there is a decision to make we use control statement.

types of control statement
1.if
2.if else
3.nested if
4.else if ladder
5.switch
*/
//wap to find greatest of two no.
#include<stdio.h>
void main(){
    int a=20,b=100;
    /*syntax:
    
    if(cond?true statement:false statement);
    */
   //if(a>b?printf("a is greater"):printf("b is greater"));//ternary operator
   // if else
   //if there is a single statement after if/else then no { bracket } is required.
    if (a > b)
        printf("A is greater");
    else
        printf("B is greater");

}