#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int, int> indices;
    int answer = 0;

    for (int i = 0; i < nums.size(); i++) {
        indices[nums[i]]++;
    }

    for (auto iter = indices.begin(); iter != indices.end(); iter++) {
        int count = iter->second;
        answer += (count * (count - 1)) / 2;
    }

    return answer;
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

    int result = numIdenticalPairs(nums);
    cout << "Number of good pairs: " << result << endl;

    return 0;
}
