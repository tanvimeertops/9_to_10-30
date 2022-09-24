/*calloc :contiguos allocation
calloc (two parameter)
*/
#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr,num;
printf("Enter a num:");
scanf("%d",&num);//3

ptr=(int*)calloc(num,sizeof(int));//initial address

// for (int i = 0; i < num; i++)
// {
//    printf("\nenter val:");
//    scanf("%d",ptr+i);
// }

for (int i = 0; i < num; i++)
{
   printf("\nenterred val:");
   printf("%d",*(ptr+i));
}

free(ptr);


printf("Enter a num:");
scanf("%d",&num);//3

ptr=(int*)malloc(num*sizeof(int));//initial address

// for (int i = 0; i < num; i++)
// {
//    printf("\nenter val:");
//    scanf("%d",ptr+i);
// }

for (int i = 0; i < num; i++)
{
   printf("\nenterred val:");
   printf("%d",*(ptr+i));
}

free(ptr);
}