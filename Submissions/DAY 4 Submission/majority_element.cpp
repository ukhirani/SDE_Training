#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size() / 2;
    unordered_map<int, int> hello;

    for (int i = 0; i < nums.size(); i++) {
        hello[nums[i]]++;
        if (hello[nums[i]] > n) {
            return nums[i];
        }
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
