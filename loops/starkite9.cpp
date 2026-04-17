#include<iostream>
using namespace std;
void print9(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){      // Fix: n-i-1 instead of n-i+1
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i-1; j++){      // Fix: n-i-1 instead of n-i+1
            cout << " ";
        }
        cout << endl;
    }
    // Bottom half
    for(int i = 0; i < n-1; i++){            // Fix: n-1 to avoid repeating middle row
        for(int j = 0; j < i+1; j++){        // Fix: i+1 spaces
            cout << " ";
        }
        for(int j = 0; j < 2*(n-i)-3; j++){ // Fix: corrected star count
            cout << "*";
        }
        for(int j = 0; j < i+1; j++){        // Fix: i+1 spaces
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print9(n);
}
