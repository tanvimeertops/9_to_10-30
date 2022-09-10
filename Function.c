/*function is a block of code where the main bussiness logic is written.
types of function:
1. inbulit/predefined/library
2. user defined
There are four types of user defined function.
1. function without parameter and without return type.
2. function with parameter and without return type.
3. function without parameter and with return type.
4. function with parameter and with return type.
stages of function:
1.declaration
2.defination
3.calling
*/
/*1. function without parameter and without return type.*/
#include<stdio.h>
#include<math.h>
void sum();//declaration
void main(){
   sum(); //calling
}
void sum()//defination
{
int a=10,b=20;
printf("sum:%d",a+b);
}