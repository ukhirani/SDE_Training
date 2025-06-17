#include <bits/stdc++.h>
using namespace std;

// Simulate the API
bool isBadVersion(int version) {
    int first_bad = 4; // change as needed
    return version >= first_bad;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int answer = n, left = 1, right = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                answer = min(answer, mid);
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return answer;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of versions: ";
    cin >> n;
    cout << "First bad version: " << sol.firstBadVersion(n) << endl;
    return 0;
}
