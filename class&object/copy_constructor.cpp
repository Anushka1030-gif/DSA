#include<iostream>
using namespace std;
class customer
{   string name;
    int account_number,balance;
    public:
    customer (string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
    }
    void display(){
        cout<<name<<"   "<<account_number<<"    "<<balance<<"\n";
    }
    customer(customer &b){
        name=b.name;
        account_number=b.account_number;
        balance=b.balance;
    }
};
int main(){
    customer a1("anu",532,729);
    customer a2("ayu",764,739);
    a1.display();
    a2.display();
    customer a3(a2);
    a3.display();
} 