#include <bits/stdc++.h>
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n + 1, 0);

    for (int i = 0; i < queries.size(); i++) {
        int a = queries[i][0] - 1;
        int b = queries[i][1] - 1;
        int k = queries[i][2];

        arr[a] += k;
        if (b + 1 < n) {
            arr[b + 1] -= k;
        }
    }

    long maxx = 0;
    long current = 0;

    for (int i = 0; i < n; i++) {
        current += arr[i];
        maxx = max(maxx, current);
    }

    return maxx;
}

int main() {
    int n, m;
    cout << "Enter size of array (n) and number of queries (m): ";
    cin >> n >> m;

    vector<vector<int>> queries(m, vector<int>(3));
    cout << "Enter each query as three integers (a b k):\n";
    for (int i = 0; i < m; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    long result = arrayManipulation(n, queries);
    cout << "Maximum value after all operations: " << result << endl;

    return 0;
}
