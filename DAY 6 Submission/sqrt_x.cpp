#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int isSqrt(int root, int x) {
        long long product = (long)root * (long)root;
        return product <= x;
    }

public:
    int mySqrt(int x) {
        if (x < 2) return x;
        int left = 0, right = x / 2, root = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (isSqrt(mid, x)) {
                root = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return root;
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter number: ";
    cin >> x;
    cout << "Square root: " << sol.mySqrt(x) << endl;
    return 0;
}
