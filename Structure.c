/*structure*/
#define n 3
#include<stdio.h>
struct student{
int roll_no;
char name[100];
}s[n];
void main(){
for (int i = 0; i < n; i++)
{
   printf("\nenter roll no:");
   scanf("%d",&s[i].roll_no);
    printf("enter name:");
    scanf("%s",&s[i].name);
}

for (int  i = 0; i < n; i++)
{
    printf("\nRoll no:%d",s[i].roll_no);
    printf("\nname:%s",s[i].name);
}


}