#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int n) {
    int num_len  = floor(log10(abs(n))) + 1;
    int answer = 0;
    for(int i = 0; i < num_len; i++) {
        if(i == 0) {
            answer += (n % 10) * (int)pow(10, num_len - 1);
        } else {
            int digit = (n % (int)pow(10, i + 1)) / (int)pow(10, i);
            answer += digit * (int)pow(10, num_len - i - 1);
        }
    }
    return answer;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = reverseDigits(n);
    cout << "Reversed number: " << result << endl;

    return 0;
}
