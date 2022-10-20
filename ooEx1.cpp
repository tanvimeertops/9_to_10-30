#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
A(){

}
A(int x,int y){
    a=x;
    b=y;
}
void print(){
    cout<<a<<"+"<<b<<endl;
}

A operator+(A p){
A temp;
temp.a=p.a+a;//1+3
cout<<p.a<<"+"<<a<<endl;
//cout<<"sum:"<<temp.a<<endl;
temp.b=p.b+b;//2+4
cout<<p.b<<"+"<<b<<endl;

return temp;
}
};
int main(){
A obj1(1,2);
A obj2(3,4);
A obj3=obj2+obj1; //obj3=obj2.add(obj1)

obj3.print();
}