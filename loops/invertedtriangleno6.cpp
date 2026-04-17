#include<iostream>
using namespace std;
void print6(int m){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int i;
    cin>>i;
    print6(i);
}