/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/

#include<iostream>
using namespace std;
class calc{
private:
 int a,b;
 public:
 calc(){
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
 }

 void calculator(){
    cout<<"sum:"<<a+b<<endl;
    cout<<"sub:"<<a-b<<endl;
    cout<<"multiplication:"<<a*b<<endl;
    cout<<"div:"<<a/b<<endl;
 }
};

int main(){
    calc c;
    c.calculator();
}