#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    int x=(max(a,max(b,c)));
    cout<<x;
}
