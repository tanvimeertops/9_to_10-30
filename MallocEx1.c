//sum of no using pointers 
#include<stdio.h>
#include<stdlib.h>
void main(){
int num,*ptr,sum=0;
printf("enter num:");
scanf("%d",&num);

ptr=(int*)malloc(num*sizeof(int));

for (int i = 0; i < num; i++)
{
   printf("enter val:");
   scanf("%d",ptr+i);
    sum=sum+*(ptr+i);
}

printf("\nsum:%d",sum);
free(ptr);
}