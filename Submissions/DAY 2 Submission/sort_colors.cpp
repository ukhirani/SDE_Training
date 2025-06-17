#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    unordered_map<int, int> colors;
    colors[0] = 0;
    colors[1] = 0;
    colors[2] = 0;

    for (int i = 0; i < nums.size(); i++) {
        colors[nums[i]]++;
    }

    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < colors[i]; j++) {
            nums[index++] = i;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements (only 0s, 1s, and 2s): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted colors: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
