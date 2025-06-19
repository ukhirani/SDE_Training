#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int index = 1;
        if(size==1) return 1;
        for(int i = 1;i<size;i++){
            if(nums[i]!=nums[i-1]){
                nums[index++] =  nums[i];
            }
        }
        return index;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> nums[i];
    int result = sol.removeDuplicates(nums);
    cout << "Unique count: " << result << endl;
    cout << "Modified array: ";
    for(int i = 0; i < result; i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}
