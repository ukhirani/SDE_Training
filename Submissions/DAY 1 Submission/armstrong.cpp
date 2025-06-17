#include <bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n) {
    int len = 3; // fixed for 3-digit numbers
    int sum = 0;

    for (int i = 0; i < len; i++) {
        int hello = (int)pow(10, i + 1);
        int digit = n % hello / (hello / 10);
        sum += (int)pow(digit, 3);
    }

    return sum == n;
}

int main() {
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;

    if (armstrongNumber(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}
