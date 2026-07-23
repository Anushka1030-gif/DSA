#include <iostream>
using namespace std;

int sumFirstAndLast(int n) {
    int ld = n % 10;      // Last digit

    while (n >= 10) {
        n /= 10;          // Keep removing last digits
    }

    int fd = n;           // First digit

    return fd + ld;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of first and last digit = " << sumFirstAndLast(n);

    return 0;
}
