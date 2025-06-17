#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool API(vector<int>& position, int m, int input) {
        int balls = 1, last = position[0];
        for (int i = 1; i < position.size(); i++) {
            if (position[i] - last >= input) {
                balls++;
                last = position[i];
            }
        }
        return balls >= m;
    }

public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int left = 1, right = position.back(), ans = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (API(position, m, mid)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n, m;
    cout << "Enter number of positions: ";
    cin >> n;
    vector<int> position(n);
    cout << "Enter positions: ";
    for (int i = 0; i < n; i++) cin >> position[i];
    cout << "Enter number of balls: ";
    cin >> m;
    cout << "Maximum magnetic force: " << sol.maxDistance(position, m) << endl;
    return 0;
}
