/* inheritance : making a class from an existing class.
types of inheritance:
1.single 
2.multi level
3.multiple : AMBIGUITY : 
WHEN THE OBJECT IS CONFUSED WHICH FUNC TO CALL BETWEEN THE TWO FUNCTION WITH SAME NAME.
4.hierarchical :
5.hybird :(MULTIPLE+HIERARCHICAL)
*/
//single 

//parent/base/super
//child/derived/inherited/sub
#include<iostream>
using namespace std;
class A{
protected:
int maths,eng,total_marks;
public:
A(){
    cout<<"enter marks for maths:";
    cin>>maths;
    cout<<"enter marks for eng:";
    cin>>eng;
}
void total(){
    
    total_marks=maths+eng;
    cout<<"total marks:"<<total_marks<<endl;
}
};
class B:public A{

    public:
    void average(){
        cout<<"average:"<<total_marks/2<<endl;
    }

};



int main(){
B obj;
obj.total();
obj.average();
}