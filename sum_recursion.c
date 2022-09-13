//5+4+3+2+1
#include<stdio.h>
int sum(int n){
    if(n>0)
    return(n+sum(n-1));
    //sum(5)=5+10=15
    //sum(4)=4+6=10
    //sum(3)=3+3=6
    //sum(2)=2+1=3
    //sum(1)=1+0=1
    //sum(0)=0
    else
    return 0;

}
void main(){
int no;
    printf("Enter value:");
    scanf("%d",&no);
    printf("%d",sum(no));
}