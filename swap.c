//swapping of two no
#include<stdio.h>
void main(){
int a=10,b=20;
//int temp;
// temp=a;
// a=b;
// b=temp;
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\tb=%d",a,b);
}