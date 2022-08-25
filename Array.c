/*Array is collection of data of similar type.
Array will always start from 0
*/
//array with macro.
#define n 5
#include<stdio.h>
void main(){
int a[n]={1,2,3,4,5};

for (int i =n-1;i>=0;i--)
{
    /*taking input in array*/
    //printf("\nEnter a value:");
    //scanf("%d",&a[i]);
    /*reverse in array*/
    printf("%d",a[i]);
}


}