#include<iostream>
using namespace std;
void print4(int m){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print4(n);
}