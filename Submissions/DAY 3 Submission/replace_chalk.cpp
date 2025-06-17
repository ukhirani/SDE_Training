#include <bits/stdc++.h>
using namespace std;

int chalkReplacer(vector<int>& chalk, int k) {
    long long sum = accumulate(chalk.begin(), chalk.end(), 0LL);
    k = k % sum;

    for(int i = 0; i < (int)chalk.size(); i++) {
        if(k >= chalk[i]) {
            k -= chalk[i];
        } else {
            return i;
        }
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter number of chalk pieces: ";
    cin >> n;

    vector<int> chalk(n);
    cout << "Enter chalk counts:\n";
    for(int i = 0; i < n; i++) {
        cin >> chalk[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    int result = chalkReplacer(chalk, k);
    cout << "Index of student who will replace chalk: " << result << endl;

    return 0;
}
