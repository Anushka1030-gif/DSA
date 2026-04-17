# include <iostream>
using namespace std;
class customer
{
    string name;
    int account_number,balance;
    public:
    customer (){
        name="anushka";
        account_number=245;
        balance=82000;
    }
    // constructor overloading
    customer (string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }
    void display(){
        cout<<name<<"    "<<account_number<<"    "<<balance;
    }
};
int main(){
    customer a1("ayushi",65,888880);
    a1.display();
}