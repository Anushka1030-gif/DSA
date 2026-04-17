#include<iostream>
using namespace std;
void no_triangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    no_triangle(n);
    return 0;
}