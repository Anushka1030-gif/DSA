#include<iostream>
using namespace std;
int divisor(int n){
   int i;
    for(int i=1;i<n;i++){
        if(n%i==0){
        cout<<i<<endl;
    }
}
    
   
}
int main(){
    int x;
    cout<<"enter a number";
    cin>>x;
    divisor(x);
    return 0;
}