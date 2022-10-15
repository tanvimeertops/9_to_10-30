/*function over riding : same name same parameter and same return type.
runtime polymorphism : function over riding
polymorphism: one name multiple form
*/
#include<iostream>
using namespace std;
class A{
    public:
A(){
    cout<<"in constructor A"<<endl;
}
void ClassAfunc(){
    cout<<"in func of class A"<<endl;
}
};
class B:public A{
    public:
B(){
 cout<<"in constructor B"<<endl;
}
void ClassAfunc(){
    cout<<"in func of class B"<<endl;
}
};
class C:public B{
public:
C(){
 cout<<"in constructor C"<<endl;
}
void ClassAfunc(){
    cout<<"in func of class C"<<endl;
}
};
int main(){
    C c;
    c.ClassAfunc();

}