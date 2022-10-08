/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;
class person {
protected:
string name;
int age;
};
class student
{
    protected:
float percentage;
};
class teacher: public person,public student
{
private:
long int salary;
public:
void write_data(){
cout<<"enter name";
cin>>name;
}

void read_data(){

}
};
int main(){
}