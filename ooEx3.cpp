/*Write a program to concatenate the two strings using Operator Overloading */
//encapsulation is wrapping of data.
#include<iostream>
#include<string.h>
using namespace std;
class A{
private:
char a[10];
public:
void acceptval(){
    cout<<"enter string:";
    cin>>a;

}

void dispaly(){
    cout<<"string before concat:"<<a<<endl;

}

void operator+ (A m){
    strcat(a,m.a);
    cout<<a;
}
};

int main(){
A obj1;
A obj2;
obj1.acceptval();
obj2.acceptval();
obj1.dispaly();
obj2.dispaly();
obj1+obj2;
}