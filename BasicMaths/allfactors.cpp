#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    int answer = -1, count = 0;

    while (n > 1) {
        bool found = false;
        for (int i = 2; i <= (int)sqrt(n) + 1; i++) {
            count++;
            if ((n % i) == 0) {
                answer = i;
                mp[i]++;
                n = n / i;
                found = true;
                break;
            }
        }
        if (!found) {
            // n is prime
            mp[n]++;
            count++;
            break;
        }
    }

    for (auto [i, freq] : mp) {
        cout << i << " : " << freq << endl;
    }
    cout << count << "\n";
}
