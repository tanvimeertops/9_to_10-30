//else if ladder
//relational operator(<,>,<=,>=,==,!=) 
/*wap to find grades of a student
70>= distinction
60>= first class
50>= second class
35>= third class
35< fail
*/
#include<stdio.h>
void main(){
    int percentage;
printf("enter percentage:");
scanf("%d",&percentage);

if(percentage>=70){
    printf("distinction");
}
else if(percentage>=60){
    printf("first class");
}
else if(percentage>=50){
    printf("second class");
}
else if(percentage>=35){
    printf("third class");
}
else
printf("fail");
}