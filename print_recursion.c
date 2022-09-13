/*print 1 to 10 nos using recursion.*/
#include<stdio.h>
void print(int n){
if(n>0)
print(n-1);
else
return;
printf("\n%d",n);
}
void main(){
    int no;
    printf("enter a no:");
    scanf("%d",&no);
    print(no);
}