#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
public:
A(int x){
    a=x;

}
void operator+ (A p){
    cout<<a+p.a<<endl;
   
}
void operator- (A p){
    cout<<a-p.a<<endl;
   
}
};

int main(){
A obj1(10);
A obj2(40);
int choice;
cout<<"enter choice:";
cin>>choice;
    switch (choice)
    {
    case 1:
        obj1+obj2;//10+40//30+60
        break;
    case 2:
      obj1-obj2;
      break;
    default:
    cout<<"invalid input!!!";
        break;
    }
}