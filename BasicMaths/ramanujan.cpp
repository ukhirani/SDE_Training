
#include <bits/stdc++.h>
using namespace std;

int main() {
    int LIMIT = 1e5;
    map<int, vector<vector<int>>> mp;

    for (int a = 1; (int)pow(a,3) < LIMIT; a++) {
        for (int b = a; (int)pow(a,3) + (int)pow(b,3) < LIMIT; b++) {
            int sum = (int)pow(a,3) + (int)pow(b,3);
            mp[sum].push_back({a,b});
        }
    }

    for (auto& [sum, vec] : mp) {
        if (vec.size() > 1) {
            cout << "-----------> " << sum << " <-----------\n";
            for (auto& hello : vec) {
                cout << "  = " << hello[0] << "^3 + " << hello[1] << "^3\n";
            }
        }
    }
}
