#include<iostream>
using namespace std;
void triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;
    triangle(n);
    return 0;
} 
