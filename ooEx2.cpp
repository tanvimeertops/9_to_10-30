/*Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
using namespace std;
#define N 3
class A{
private:
 int a[10];

 public:
 void acceptVal(){
    for (int i = 0; i < N; i++)
    {
        cout<<"enter val:";
        cin>>a[i];
    }
    
 }
 void display(){
    for (int i = 0; i < N; i++)
    {
        cout<<a[i]<<"\t" ;

    }
    cout<<endl;
    
 }

 void operator+( A m){
        int res[10];
        for (int i = 0; i < N; i++)
        {
            res[i]=a[i]+m.a[i];
        }
        
        for (int i = 0; i < N; i++)
        {
           cout<<res[i]<<"\t";
        }
        

 }
};
int main(){

    A obj1;
    A obj2;
    obj1.acceptVal();
    obj2.acceptVal();
    obj1.display();
    obj2.display();
    obj1+obj2;
}