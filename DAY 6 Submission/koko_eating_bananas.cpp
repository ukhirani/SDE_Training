#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool targetReached(vector<int>& v, int k, int h) {
        long long time = 0;
        for (int bananas : v)
            time += (bananas + k - 1) / k;
        return time <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end()), answer = right;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (targetReached(piles, mid, h)) {
                answer = mid;
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
    int n, h;
    cout << "Enter number of piles: ";
    cin >> n;
    vector<int> piles(n);
    cout << "Enter pile sizes: ";
    for (int i = 0; i < n; i++) cin >> piles[i];
    cout << "Enter number of hours: ";
    cin >> h;
    cout << "Minimum eating speed: " << sol.minEatingSpeed(piles, h) << endl;
    return 0;
}
