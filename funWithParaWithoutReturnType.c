//2. function with parameter and without return type
#include <stdio.h>

void sum(int a, int b);//declaration

void main()
{
    int a, b;
    printf("Enter num:");
    scanf("%d %d", &a, &b);

    sum(a, b);//calling
}
void sum(int a, int b)//defination
{

    printf("\nAdd:%d", a + b);
}