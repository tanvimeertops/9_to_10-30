#include<stdio.h>
#include<math.h>
void main(){
    double principal=100000.0,rate=7.4,time=5.0;
double Amount = principal * 
                  ((pow((1 + rate / 100), 
                    time)));
             printf("%lf",Amount);       
}