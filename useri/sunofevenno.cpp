#include<iostream>
using namespace std;
int main(){
    int n,a,sum=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<n;i++){
        a=n%10;
        n/=10;
        if(a%2==0){
            sum+=a;
        }
    }
    cout<<sum;
    return 0;
}