#include <bits/stdc++.h>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> answer(n, 0);
    int prefix_sum = 0;

    for (int i = 0; i < bookings.size(); i++) {
        int start = bookings[i][0] - 1;
        int end = bookings[i][1] - 1;
        int seats = bookings[i][2];

        answer[start] += seats;
        if (end + 1 < n) {
            answer[end + 1] -= seats;
        }
    }

    for (int i = 0; i < n; i++) {
        answer[i] += prefix_sum;
        prefix_sum = answer[i];
    }

    return answer;
}

int main() {
    int m, n;
    cout << "Enter number of bookings and total flights: ";
    cin >> m >> n;
    vector<vector<int>> bookings(m, vector<int>(3));
    cout << "Enter bookings (start, end, seats):\n";
    for (int i = 0; i < m; i++) {
        cin >> bookings[i][0] >> bookings[i][1] >> bookings[i][2];
    }

    vector<int> result = corpFlightBookings(bookings, n);
    cout << "Flight Seat Totals: ";
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}
