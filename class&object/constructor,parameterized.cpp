# include <iostream>
using namespace std;
class customer
{
    string name;
    int account_number,balance;
    public:
    customer (string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
    }
    // constructor overloading
    customer (string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
    }
    void display(){
        cout<<name<<"    "<<account_number<<"    "<<balance;
    }
};
int main(){
    customer a1("ayushi",65,888880);
    a1.display();
}




