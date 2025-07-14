#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<double, int>> deviations;
    long long powerOfTwo = 2;
    int x = 1;

    for (int y = 1; y <= 10; ++y) {
        long long powerOfTen = pow(10, y);

        while (powerOfTwo < powerOfTen) {
            powerOfTwo *= 2;
            x++;
        }

        double deviation = abs((double)powerOfTen - (double)powerOfTwo);
        deviation /= powerOfTen;

        deviations.push_back({deviation, y});
    }

    sort(deviations.begin(), deviations.end());

    cout << "Power (y)\tDeviation (in %)\n";
    for (auto& [dev, y] : deviations) {
        cout << "10^" << y << "\t\t"  << dev << endl;
    }
    return 0;
}
