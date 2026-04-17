#include<iostream>
using namespace std;
int reverse(int n){
    int ld,rev=0;
    while(n!=0){
        ld=n%10;
        rev=rev*10;
        rev=rev+ld;
        n/=10;
    }
    cout<<rev;
    return 0;
}
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    reverse(n);
    return 0;
}