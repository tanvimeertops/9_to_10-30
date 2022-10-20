/*abstraction: it is process where only essential info is given and details are hidden.*/
/*1.abstract class must have one pure virtual func
2. pure virtual func by zero @ the end of func
3. abstract class cannot have a obj.
4. if u dont define the virtual func in child class that class will become abstract class
*/
#include<iostream>
using namespace std;
class A{
public:
virtual void show()=0;
};
class B:public A{
public:
void show(){
    cout<<"in virtual func";
}
};
int main(){

  B obj;
  obj.show();
}