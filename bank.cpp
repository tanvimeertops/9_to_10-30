/*Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account 
2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance*/

#include<iostream>
using namespace std;
class Bank{
private:
string name;
string acc_type;
long long acc_no;
double balance;
public:
void assign_value(){
    cout<<"\nEnter Name of the depositor: ";
    getline(cin,name);
    cout<<"\nEnter Type of Account : ";
    getline(cin,acc_type);
    cout<<"\nEnter Acc no:";
    cin>>acc_no;
    cout<<"\nEnter balance:";
    cin>>balance;
}

void display(){
    cout<<"\nName of the depositor: "<<name;
    cout<<"\nType of Account : "<<acc_type;
    cout<<"\nAcc no:"<<acc_no;
    cout<<"\nbalance:"<<balance;

}

void deposit(){
    double bal;
    cout<<"\nenter tha ammount you want to deposit:";
    cin>>bal;
    balance+=bal;
    cout<<"\nAvailable balance:"<<balance;
}

void withdraw(){
    double bal;
 cout<<"\nenter tha ammount you want to withdraw:";
 cin>>bal;
balance-=bal;
 cout<<"\nAvailable balance:"<<balance;
}
};
int main(){
    int choice;
   Bank b;
   b.assign_value();
   cout<<"\n press 1: To deposited an amount \n press 2:To withdraw an amount after checking balance \n press 3:To display name and balance \n enter your choice:";
   cin>>choice;
   switch (choice)
   {
   case 1:
   b.deposit();
    break;
   case 2:
   b.withdraw();
   break;
   case 3:
   b.display();
   break;
   default:
   cout<<"\ninvalid input";
    break;
   }
}