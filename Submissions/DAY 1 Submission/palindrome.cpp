#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int num_len = floor(log10(abs(n))) + 1;
    int answer = 0;
    for(int i = 0; i < num_len; i++) {
        if(i == 0) {
            answer += (n % 10) * (int)pow(10, num_len - 1);
        } else {
            int digit = (n % (int)pow(10, i + 1)) / (int)pow(10, i);
            answer += digit * (int)pow(10, num_len - i - 1);
        }
    }
    return answer == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }

    return 0;
}
