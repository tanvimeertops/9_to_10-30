#include<iostream>
using namespace std;
class grandfather{
public:
grandfather(){
cout<<"house with 3 bhk"<<endl;
}

};

class father:public grandfather{
public:
father(){
    cout<<"land with 4.5 acre"<<endl;
}
};
class mother{
public:
mother(){
    cout<<"gold 40 grams"<<endl;
}
};
class son:public father,public mother{
public:
void car(){
    cout<<"audi"<<endl;
}
} ;
int main(){
son s;
s.car();

}