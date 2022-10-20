/* area */
#include<iostream>
using namespace std;
class A{
    protected:
    int dim;
    public:
    void getdim(){
    
        cin>>dim;
    }
    virtual void area()=0;
};
class Square:public A{
public:
void area(){
    cout<<dim*dim<<endl;
}
};
class Circle:public A{
public:
void area(){
    cout<<3.14*dim*dim<<endl;
}
};
int main(){
    Square sq;
    Circle c;
    cout<<"enter dimension for square:";
    sq.getdim();
    cout<<"enter radius:";
    c.getdim();
    cout<<"====area of square==="<<endl;
    sq.area();
 cout<<"====area of circle==="<<endl;
 c.area();
}