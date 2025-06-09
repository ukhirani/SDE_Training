#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> hello;

    for(int i = 0; i < (int)nums.size(); i++) {
        int yello = nums[i];
        if(hello.find(target - yello) != hello.end()) {
            return {i, hello[target - yello]};
        } else {
            hello[yello] = i;
        }
    }
    return {1, 1};  // the code will never reach here anyways provided the input constraints
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    cout << "Indices of two sum: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
