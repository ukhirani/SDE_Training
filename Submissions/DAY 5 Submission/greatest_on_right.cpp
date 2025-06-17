#include <bits/stdc++.h>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int maxx = INT_MIN;
    int buffer = INT_MIN;
    for (int i = arr.size() - 2; i >= 0; i--) {
        maxx = max(arr[i + 1], buffer);
        buffer = arr[i];
        arr[i] = maxx;
    }
    arr[arr.size() - 1] = -1;
    return arr;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> result = replaceElements(arr);
    cout << "Replaced Elements: ";
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}
