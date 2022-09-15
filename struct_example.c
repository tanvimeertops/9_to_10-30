/*Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age*/
#define n 3
#include<stdio.h>
struct employee
{
    int empno;
    char empname[100];
    char address[100];
    int age;
}e[n];


void main(){
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter emp no:");
        scanf("%d",&e[i].empno);
        printf("\nEnter emp name:");
        scanf("%s",&e[i].empname);
        printf("\nEnter address:");
        scanf("%s",&e[i].address);
        printf("\nEnter age:");
        scanf("%d",&e[i].age);
    }

    for (int i = 0; i < n; i++)
    {
       printf("\nemp no:%d",e[i].empno);
       printf("\nEmp name:%s",e[i].empname);
       printf("\nAddress:%s",e[i].address);
       printf("\n Age:%d",e[i].age);

    }
    
    
}