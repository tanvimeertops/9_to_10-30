/*mutiple inheritance:  
*/
#include<iostream>
using namespace std;
class studentInfo{
protected:
string name;
int age;
public:
void getStudentInfo(){
    cout<<"enter name:";
    getline(cin,name);
    cout<<"enter age:";
    cin>>age;
}
};
class stuMarks{
protected:
int phy,chem;
public:
void getMarks(){
    cout<<"enter phy marks:";
    cin>>phy;
    cout<<"enter chem marks";
    cin>>chem;
}
};
class result:public studentInfo,public stuMarks{
private:
 int total;
 float avg;
 public:
 void results(){
    total=phy+chem;
    avg=(float)total/2;
 }
 void display(){
    cout<<"=====student info======="<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"physics:"<<phy<<endl;
    cout<<"chemistry:"<<chem<<endl;
    cout<<"total marks obtained:"<<total<<endl;
    cout<<"percentage:"<<avg<<endl;

 }
};

int main(){
result res;
res.getStudentInfo();
res.getMarks();
res.results();
res.display();

}