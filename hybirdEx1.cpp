/*hybird  eg (single+multiple)*/
#include<iostream>
using namespace std;
class A{
protected:
int x;

};
class B:public A{
    public:
B(){
    x=10;
}
};
class C{
    protected:
    int y;
    public:
    C(){
        y=90;
    }
};
class D:public B,public C{
public:
void sum(){
    cout<<"sum:"<<x+y<<endl;
}
};

int main(){
    D obj;
    obj.sum();
}
