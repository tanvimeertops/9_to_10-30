/* calling of function
1.call by value
2.call by reference

*/
#include<stdio.h>
int swap(int *a,int *b){
  
int temp;
temp=*a;
*a=*b;
*b=temp;

}
void main(){
int a=10;
int b=20;
printf("\nbefore swapping a:%d",a);
printf("\nbefore swapping b:%d",b);

swap(&a,&b);

printf("\nafter swapping a:%d",a);
printf("\nafter swapping b:%d",b);

}