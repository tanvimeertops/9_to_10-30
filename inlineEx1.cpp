 /*Write a program to find the multiplication values and the cubic values using 
inline function
default parameter: always assign a value from right corner.
 */

#include<iostream>
#include<cmath>
using namespace std;
inline void multi(int a,int b,int c=5,int d=2){
    cout<<"\nmultiplication:"<<a*b*c*d;
}
int y;
inline void  cube(int x){
    y=x;
   cout<<"\ncube:"<<pow(y,3) ;
 
}
int main(){
    multi(1,2,3);
    cube(5);
   
}