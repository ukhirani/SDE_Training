#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int FindPivot(vector<int>& v, int left, int right) {
        while (left < right) {
            int mid = (left + right) / 2;
            if (v[mid] > v[right]) left = mid + 1;
            else right = mid;
        }
        return left;
    }

    int BinarySearch(vector<int> &v, int target, int left, int right, int size) {
        if(left > right) return -1;
        int mid = (left + right) / 2;
        int offset = mid % size;
        if(v[offset] == target) return offset;
        if(target > v[offset]) return BinarySearch(v, target, mid + 1, right, size);
        return BinarySearch(v, target, left, mid - 1, size);
    }

public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int pivot = FindPivot(nums, 0, size - 1);
        return BinarySearch(nums, target, pivot, size - 1 + pivot, size);
    }
};

int main() {
    Solution sol;
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << "Enter target: ";
    cin >> target;
    cout << "Index of target: " << sol.search(nums, target) << endl;
    return 0;
}
