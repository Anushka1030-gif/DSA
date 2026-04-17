#include<iostream>
using namespace std;
void print5(int m){
    for(int i=1;i<m;i++){
        for(int j=0;j<m-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print5(n);
}