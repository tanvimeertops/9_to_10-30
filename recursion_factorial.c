/*recursion : function calling itself
why recursion:
 in place any loop we can recursion.
*/
/*factorial: 5 (5*4*3*2*1=120)*/
//3*2*1
#include<stdio.h>
int fact(int n){
if(n>0)
return(n*fact(n-1));
//fact(3)= 3*2=6
//fact(2)= 2*1=2
//fact(1)=1*1=1
//fact(0)=1
else
return 1;
}
void main(){
    int no;
    printf("Enter value:");
    scanf("%d",&no);
    printf("%d",fact(no));

}