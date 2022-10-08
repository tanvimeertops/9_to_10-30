/*multiple inheritance
A: : get data lxb
B:  : get radius r
C: area of rectagle,area of circle
*/
#include<iostream>
using namespace std;
class A{
protected:
int length,breadth;
public:
void getData_rec(){
cout<<"enter length: ";
cin>>length;
cout<<"enter breadth:";
cin>>breadth;
}
};
class B{
protected:
int radius;
public:
void getData_circle(){
  cout<<"enter radius:";
  cin>>radius;  
}
};

class C:public A,public B{
public:
void area_of_rectagle(){
    cout<<"area of rectagle:"<<length*breadth<<endl;
}
void area_of_circle(){
    cout<<"area of circle:"<<3.14*radius*radius<<endl;
}
};
int main(){
    C obj;
    obj.getData_rec();
    obj.getData_circle();
    obj.area_of_rectagle();
    obj.area_of_circle();

}