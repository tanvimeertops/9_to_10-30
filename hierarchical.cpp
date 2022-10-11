/*hierarchical inheritance
*/
#include<iostream>
using namespace std;
class A{
   protected:
   int dim_1,dim_2;
   public:
   void getdim(){
    cout<<"enter dimension 1:";
    cin>>dim_1;
    cout<<"enter dimension 2:";
    cin>>dim_2;
   }
};
class B : public A
{
public:
    void AoR()
    {
        cout << "Area of rectangle:" << dim_1 * dim_2 << endl;
    }
};

class C:public A{
public:
void Aoc(){
    cout<<"Area of circle:"<<3.14*dim_1*dim_1<<endl;
}
};

class D:public A{
public:
void AoS(){
    cout<<"Area of square:"<<dim_1*dim_1<<endl;
}
};
int main(){
B b;
C c;
D d;
b.getdim();
c.getdim();
d.getdim();
b.AoR();
c.Aoc();
d.AoS();
}