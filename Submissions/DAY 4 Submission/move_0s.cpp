#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int index = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        } else {
            count++;
        }
    }

    int hello = nums.size() - 1;
    while (count != 0) {
        count--;
        nums[hello] = 0;
        hello--;
    }
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

    moveZeroes(nums);

    cout << "Array after moving zeroes:\n";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
