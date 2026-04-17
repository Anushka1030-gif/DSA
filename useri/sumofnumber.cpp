// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0,ld,n;
//     cout<<"enter a number";
//     cin>>n;
//     while(n!=0){
       
//         ld=n%10;
//         n=n/10;
//         sum+=ld; 
//     }
//     cout<<sum;
// }
#include<iostream>
using namespace std;
int main(){
    int sum=0,ld,n;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<n;i++){
       
        ld=n%10;
        n=n/10;
        sum+=ld; 
    }
    cout<<sum;
}