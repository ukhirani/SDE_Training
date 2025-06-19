#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int HCF(int a, int b) {
        return b == 0 ? a : HCF(b, a % b);
    }

public:
    int findGCD(vector<int>& nums) {
        int minn = *min_element(nums.begin(), nums.end());
        int maxx = *max_element(nums.begin(), nums.end());
        return HCF(minn, maxx);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << "GCD of min and max: " << sol.findGCD(nums) << endl;
    return 0;
}
