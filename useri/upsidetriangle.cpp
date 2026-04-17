#include<iostream>
using namespace std;
void upsidetriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i+1;j++){
            cout<<" *";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    upsidetriangle(n);
    return 0;
}