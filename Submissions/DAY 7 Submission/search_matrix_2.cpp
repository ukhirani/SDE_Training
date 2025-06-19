#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = matrix[0].size() - 1;
        while(i < matrix.size() && j >= 0) {
            int val = matrix[i][j];
            if(val == target) return true;
            else if(target > val) i++;
            else j--;
        }
        return false;
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
