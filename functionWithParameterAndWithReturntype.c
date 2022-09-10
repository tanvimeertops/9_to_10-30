//function with parameter and with return type
#include <stdio.h>

int sum(int a,int b);//declaration
void main()
{
    printf("\nAdd:%d", sum(10,20));//calling
}
int sum(int a,int b)//defination
{
    return (a + b);
}