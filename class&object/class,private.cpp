#include<iostream>
 using namespace std;
 
class student
{   private:
    string name;
    int age,roll_number;
    string grade;
    // use of private with the help of function which should be a public function
    public:
    void setname(string n ){
        name=n ;
    }
     void setage(int x){
        age=x;
    }
     void setroll_number(int r){
        roll_number=r;
    }
     
};
 int main(){
    student s1;
    s1.setname("anushka");
    s1.setage(20);
    
    s1.setroll_number(30);

    
 }