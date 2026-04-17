#include<iostream>
using namespace std;
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
    pattern(n);
    return 0;
}