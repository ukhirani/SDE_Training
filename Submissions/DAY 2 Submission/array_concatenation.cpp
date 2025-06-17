#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int nums_size = nums.size();
    for (int i = 0; i < nums_size; i++) {
        nums.push_back(nums[i]);
    }
    return nums;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = getConcatenation(nums);

    cout << "Concatenated array:\n";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
