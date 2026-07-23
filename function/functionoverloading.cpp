#include<iostream>
using namespace std;
void calculateArea(double r){
    double a=3.14*r*r;
    cout<<a<<endl;
}
void calculateArea(double l,double w){
    int a=l*w;
    cout<<a;
}

int main(){
    double r;
    int l,w;
    cout<<"ENTER THE RADIUS OF CIRCLE:";
    cin>>r;
    cout<<"ENTER THE LENGHT OF RECTANGLE:";
    cin>>l;
    cout<<"ENTER THE WIDTH OF RECTANGLE:";
    cin>>w;
    calculateArea(r);
    calculateArea(l,w);
}