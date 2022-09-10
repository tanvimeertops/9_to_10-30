//3. function without parameter and with return type
#include <stdio.h>

int sum();//declaration
void main()
{
    printf("\nAdd:%d", sum());//calling
}
int sum()//defination
{
    int a = 20, b = 10;
    return (a + b);
}