#include <bits/stdc++.h>
using namespace std;

int alternateDigitSum(int n) {
    int sum = 0;
    int no_of_digits = floor(log10(abs(n))) + 1;
    int constant;

    if (no_of_digits % 2 == 0) {
        constant = -1;
    } else {
        constant = 1;
    }

    while (n > 0) {
        sum += (n % 10) * constant;
        constant *= -1;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = alternateDigitSum(n);
    cout << "Alternate digit sum: " << result << endl;

    return 0;
}
