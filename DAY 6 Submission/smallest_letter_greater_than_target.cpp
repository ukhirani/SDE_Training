#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int BinarySearch(char k, vector<char> &v, int low, int high) {
        if (low > high) return -1;
        int mid = (low + high) / 2;
        if ((int)v[mid] > (int)k && (mid == 0 || (int)v[mid - 1] <= (int)k)) return mid;
        if ((int)v[mid] > (int)k) return BinarySearch(k, v, low, mid - 1);
        return BinarySearch(k, v, mid + 1, high);
    }

public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int answer = BinarySearch(target, letters, 0, letters.size() - 1);
        return answer >= 0 ? letters[answer] : letters[0];
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of letters: ";
    cin >> n;
    vector<char> letters(n);
    cout << "Enter letters: ";
    for (int i = 0; i < n; i++) cin >> letters[i];
    char target;
    cout << "Enter target letter: ";
    cin >> target;
    cout << "Next greatest letter: " << sol.nextGreatestLetter(letters, target) << endl;
    return 0;
}
