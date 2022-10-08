//muti level inheritance.
// A: marks : eng,math
//B: total
//C: average
#include<iostream>
using namespace std;
class A{
protected:
int eng=0,math=0;
public:
void getData(int english,int maths){
    eng=english;
    math=maths;
}

};
class B:public A{
protected:
int total;
public:
void total_mark(){
    total=eng+math;
    cout<<"total marks:"<<total<<endl;
}
};
class C:public B{
private:
float average;
public:
void avrage_mark(){
    average=(float)total/2;
    cout<<"average :"<<average<<endl;
}
};
int main(){
    C obj;
    obj.getData(45,52);
    obj.total_mark();
    obj.avrage_mark();

}