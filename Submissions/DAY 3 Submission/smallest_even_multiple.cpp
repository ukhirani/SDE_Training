#include <bits/stdc++.h>
using namespace std;

int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : 2 * n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = smallestEvenMultiple(n);
    cout << "Smallest even multiple: " << result << endl;

    return 0;
}
