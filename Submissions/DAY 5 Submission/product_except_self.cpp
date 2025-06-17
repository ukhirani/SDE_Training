#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int size = nums.size();
    vector<int> answer(size, 1);
    int prefix_product = 1;
    int suffix_product = 1;

    for (int i = 0; i < size; i++) {
        answer[i] *= prefix_product;
        prefix_product *= nums[i];
    }

    for (int i = size - 1; i >= 0; i--) {
        answer[i] *= suffix_product;
        suffix_product *= nums[i];
    }

    return answer;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> result = productExceptSelf(nums);
    cout << "Product Except Self: ";
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}
