/*Assume that the test results of a batch of students are stored in three different 
classes. 
Class Students are storing the roll number. 
Class Test stores the marks 
obtained in two subjects and 
class result contains the total marks obtained in 
the test. 
The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class Students{
protected:
int roll_no;
public:
void get_roll_no(){
cout<<"enter roll no:";
cin>>roll_no;
}
};
class Test:public Students{
protected:
int science,geography;
public:
void get_marks(){
    cout<<"enter marks:"<<endl;
    cout<<"science:";
    cin>>science;
    cout<<"geograghy:";
    cin>>geography;
}
};
class result:public Test{
private:
 int total;
 public:
 void total_marks(){
    total=science+geography;
    
 }
 void display(){
    cout<<"=====entered details====="<<endl;
    cout<<"roll no:"<<roll_no<<endl;
    cout<<"total marks:"<<total<<endl;
 }
};
int main(){
    result res;
    res.get_roll_no();
    res.get_marks();
    res.total_marks();
    res.display();

}

/*
1.students:roll no
2. test: marks of 5 subject
3. result: total marks
4. percentage : average of marks.
5. grade: division as per average, display
*/