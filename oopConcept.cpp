/*oops (object oriented programming)
1. class : is a collection data member(variable) and member function(func).
2. object : gives permission to access the functionality of class.
3. inheritance
4. polymorphism
5. encapsulation
6. abstraction

access specifier: it gives access.
1.private
2.public
3.protected
 */
/*WAP to create simple calculator using class*/
#include<iostream>
using namespace std;
class Tops{
private:
int a,b;
public:
void getdata(){
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
}
void calc(){
   cout<<"sum:"<<a+b<<endl;
       cout<<"sub:"<<a-b<<endl;
          cout<<"multi:"<<a*b<<endl;
             cout<<"div:"<<a/b<<endl;

}
};
int main(){
    Tops obj;//object create
    obj.getdata();
    obj.calc();
    
}

