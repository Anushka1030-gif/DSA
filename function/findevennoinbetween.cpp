#include<iostream>
using namespace std;
void printeven(int start,int end){
    for(int i=start;i<=end;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int start,end;
    cout<<"Enter start and end number";
    cin>>start>>end;
    printeven(start,end);
}