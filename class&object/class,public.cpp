 #include<iostream>
 using namespace std;
 
class student
{   public:
    string name;
    int age,roll_number;
    string grade;
    
};
 int main(){
    student s1;
    s1.name="anushka";
    s1.age=20;
    s1.roll_number=30;
    s1.grade="b";
    cout<<s1.name<<endl<<s1.age;
    student s2;
    s2.name="advika";
   
    s2.age=19;
    s2.roll_number=20;
    s2.grade="A";
    cout<<"  "<<s2.name<<"  "<<s2.age<<"  "<<s2.grade;
 }