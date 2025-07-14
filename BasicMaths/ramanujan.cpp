
#include <bits/stdc++.h>
using namespace std;

int main() {
    long  LIMIT = 1e12;
    long count = 0;
    map<int, vector<vector<long>>> mp;

    for (long a = 1; (long)pow(a,3) < LIMIT; a++) {
        for (long b = a; (long)pow(a,3) + (long)pow(b,3) < LIMIT; b++) {
            long sum = (long)pow(a,3) + (long)pow(b,3);
            mp[sum].push_back({a,b});
        }
    }

    for (auto& [sum, vec] : mp) {
        if (vec.size() > 1) {
            cout << "-----------> " << sum << " <-----------\n";
            count++;
            for (auto& hello : vec) {
                cout << "  = " << hello[0] << "^3 + " << hello[1] << "^3\n";
            }
        }
    }

    cout<<count<<"count";
}
