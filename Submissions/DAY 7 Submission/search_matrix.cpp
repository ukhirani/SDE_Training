#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int BinarySearch(int k, vector<vector<int>>& v, int low, int high, int n) {
        if (low > high) return -1;
        int mid = (low + high) / 2;
        int i = mid / n;
        int j = mid % n;
        if (v[i][j] == k) return mid;
        if (v[i][j] > k) return BinarySearch(k, v, low, mid - 1, n);
        return BinarySearch(k, v, mid + 1, high, n);
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        return BinarySearch(target, matrix, 0, rows * cols - 1, cols) >= 0;
    }
};

int main() {
    Solution sol;
    int rows, cols, target;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements: ";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    cout << "Enter target: ";
    cin >> target;
    cout << "Element found: " << boolalpha << sol.searchMatrix(matrix, target) << endl;
    return 0;
}
