#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> hello;
    for (int i = 0; i < arr.size(); i++) {
        int value = arr[i];
        hello[value] += 1;
    }

    vector<int> count;
    set<int> count_set;
    for (auto [first, second] : hello) {
        count.push_back(second);
        count_set.insert(second);
    }

    return count.size() == count_set.size();
}

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool result = uniqueOccurrences(arr);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
