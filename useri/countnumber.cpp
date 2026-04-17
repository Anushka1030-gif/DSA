#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++){
        n=n/10;
        a++;
    }
    cout<<a;
}