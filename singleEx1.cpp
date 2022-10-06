/*Assume a class cricketer is declared. 
Declare a derived class batsman from 
cricketer. 
Data member of batsman. Total runs, Average runs and best 
performance.
 Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/

#include<iostream>
using namespace std;
class cricketer{
 protected:
  string name;
  int run[3];
  public:
  void getData(){
    cout<<"enter name:";
    getline(cin,name);
    for (int i = 0; i < 3; i++)
    {
    cout<<"enter run:";
    cin>>run[i];
    }
    
   
  }
};
class  batsman:public cricketer{
private: 
int total_runs=0,average_runs,best_performance;
public:
void total_run_func(){
    for (int i = 0; i < 3; i++)
    {
        total_runs+=run[i];
    
    }
    
cout<<"total runs:"<<total_runs<<endl;
}
void average_run(){
    cout<<"avrage run:"<<total_runs/3<<endl;
}
};
int main(){
    batsman b;
    b.getData();
    b.total_run_func();
    b.average_run();
}