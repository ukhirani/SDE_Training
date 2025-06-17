#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> result = runningSum(nums);
    cout << "Running Sum: ";
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}
