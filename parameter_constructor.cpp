/*parameterized constructor*/
/*volume of box using parameterized constr*/
/* constructor overloading:same name but diff parameter*/
#include<iostream>
using namespace std;
class A{
private:
int length,bredth,height,radius,dim;
public:

        A(){
            cout<<"enter dimension:";
            cin>>dim;
        }

    A(int l, int b, int h)
    {
        length = l;
        bredth = b;
        height = h;
    }

    A(int r)
    {
        radius = r;
    }

    void voulume()
    {
        cout << "voulume:" << length * bredth * height << endl;
    }

void area_of_circle(){
cout<<"area of circle:"<<3.14*radius*radius<<endl;
}

void area_of_square(){
    cout<<"area of square:"<<dim*dim;
}
};

int main(){
    A obj2;
A obj(1,2,3);
A obj1(2);
obj.voulume();
obj1.area_of_circle();
obj2.area_of_square();
}