/*structure using malloc*/

#include<stdio.h>
#include<stdlib.h>
struct student{
int roll_no;
char name[100];
};
void main(){
int num;
     struct student *s;
    printf("enter no of student:");
    scanf("%d",&num);

s=(struct student*)malloc(num*sizeof(struct student));

for (int i = 1; i <=num; i++)
{
    
    printf("enter name:");
    scanf(" ");//buffer cleaning
    gets((s+i)->name);
   printf("\nenter roll no:");
   scanf("%d",&(s+i)->roll_no);
    
    
}

for (int  i = 1; i <=num; i++)
{
    printf("\nRoll no:%5d",(s+i)->roll_no);
    printf("\nname:%5s",(s+i)->name);
}


}