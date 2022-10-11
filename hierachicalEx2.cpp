#include<iostream>
using namespace std;
class person{
protected:
char name[52];
int age;
public:
void getDAta(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
}
};
class student:public person{
private:
float per;
public:
void getPer(){
    cout<<"enter percenatge:";
    cin>>per;
}
void dis_per(){
    cout<<"====student data===="<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"percentage:"<<per<<endl;
}
};

class teacher:public person{
private:
long int salary=0;
public:
void getSal(){
    cout<<"enter salary:";
    cin>>salary;
}

void dis_teacher(){
    cout<<"====teacher data===="<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"salary:"<<salary<<endl;
}
};
int main(){
     student s;
    teacher t;
    s.getDAta();
    s.getPer();
    t.getDAta();
    t.getSal();
    s.dis_per();
    t.dis_teacher();
}