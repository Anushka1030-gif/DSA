#include<iostream>
using namespace std;
int main(){
    int n,a,product=1;
    cout<<"enter a number ";
    cin>>n;
    for(int i=1;i<n;i++){
        a=n%10;
        n/=10;
        product*=a;
    }
    cout<<product;
}