
/* constructor : is a special member function(func)  in which object is initializes by it own.
characteristics of constructor:
// 1. same as class name
// 2. no return type 
// 3. constructors are automatically invoked whenever the object is created.

types of constructor:
1. default (no parameter)
2. parameterised (with parameter)
3. copy (obj as agru) //clone of obj
*/
//voulume of box (l*b*h)
#include<iostream>
using namespace std;

class constructorEx1
{
private:
    int length,bredth,height;
public:
//DEFUALT constructor
    constructorEx1();
    void volume();
    ~constructorEx1(); //destructor
};

constructorEx1::constructorEx1()
{
    cout<<"enter length:"<<endl;
    cin>>length;
    cout<<"enter bredth:"<<endl;
    cin>>bredth;
    cout<<"enter height:"<<endl;
    cin>>height;
}

void constructorEx1::volume(){
cout<<"volume:" <<length*bredth*height<<endl;
}

constructorEx1::~constructorEx1()
{
}

int main(){
    constructorEx1 dc; //obj created.
    dc.volume();
}