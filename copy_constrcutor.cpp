/* copy constructor

*/
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

 calc(int x,int y){
a=x;
b=y;
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
    cout<<"default cons"<<endl;
    c.calculator();
    calc obj1(10,8);
    cout<<"parameter cons"<<endl;
    obj1.calculator();
    calc obj(obj1);
    cout<<"copy cons"<<endl;
    obj.calculator();
}