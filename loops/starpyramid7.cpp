#include<iostream>
using namespace std;
void print7(int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<k-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
         for(int j=0;j<k-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int k;
    cin>>k;
    print7(k);
}