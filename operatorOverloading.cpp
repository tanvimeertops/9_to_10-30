/*operator overloading*/ 
//almost all operator can be overloaded
// except ::, * ,?:,sizeof
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

A operator+ (A p){
    A temp;

}

};
int main(){
A obj(1,2);
A obj1(3,4);



}
