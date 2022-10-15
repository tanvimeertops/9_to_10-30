/*polymorphism : one name multiple form
types of polymorphism:
1. runtime / function over riding 
2. compile time: 
    2.1 : function overloading 
    2.2 : constructor overloading
    2.3 : operator overloading
*/
/*2.1 : function overloading

Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading */
#include<iostream>
using namespace std;
class calculator{
    private:
    int a,b;
    public:
    void calc(){
            cout<<"enter a:";
            cin>>a;
            cout<<"enter b:";
            cin>>b;
            cout<<endl<<"div:"<<(double)a/b<<endl;
    }
    void calc(int num1,int num2){
        cout<<"sub:"<<num1-num2<<endl;
    }

    void calc( double x,double y){
            cout<<"multiplication:"<<x*y<<endl;
    }
    void calc(double p,int q){
        cout<<"sum:"<<p+q<<endl;
        
    }

};
int main(){
    double a,b;

            cout<<"enter a:";
            cin>>a;
            cout<<"enter b:";
            cin>>b;

    calculator c;
    
    c.calc(a,(int)b); //10.5+2
    c.calc((int)a,(int)b);//73
    c.calc(a,b);//2572.99
    c.calc();//
}