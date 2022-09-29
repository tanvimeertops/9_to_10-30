/*inline func: it replaces the func call with func body */
#include<iostream>
using namespace std;
inline void sum(int a,int b){
    cout<<"sum:"<<a+b;
}

int main(){

    sum(1,2);

}