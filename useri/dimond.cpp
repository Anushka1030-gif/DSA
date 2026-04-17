#include<iostream>
using namespace std;
void pattern1(int x){
    for (int i=0;i<x;i++){
        for(int j=0;j<x-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<x-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern(int x){
    for (int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*x-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;
    pattern1(n);
    pattern(n);
    return 0;
}