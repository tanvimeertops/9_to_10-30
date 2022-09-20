/*Write a program of union employee that provides the following 
information -print and display empno, empname, address and age*/
//union unites all the variable and store it in same address
#define n 3
#include<stdio.h>
union employee
{
    int empno;
    //char empname[10];
    //char address[10];
    char b;
}e;

void main(){
   
       e.empno=65;
        // printf("\nEnter emp name:");
        // scanf("%s",&e.empname);
        //  printf("\nEnter emp no:");
        
        // scanf("%d",&e.empno);
        // printf("\nEnter address:");
        // scanf("%s",&e.address);
        // printf("\nEnter age:");
        // scanf("%c",&e.b);
    
       printf("\nemp no:%d",e.empno);
    //    printf("\nEmp name:%s",e.empname);
    //    printf("\nAddress:%s",e.address);
       printf("\n Age:%c",e.b);
 
 printf("\n Address of all variables:\n");
        printf("\nemp no:%d",&e.empno);
    //    printf("\nEmp name:%d",&e.empname);
    //    printf("\nAddress:%d",&e.address);
       printf("\n Age:%d",&e.b);
}