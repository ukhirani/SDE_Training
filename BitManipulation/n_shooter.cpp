#include <iostream>
using namespace std;

int getShooter(int n) {
    int p = 1;
    while (p * 2 <= n) {
        p *= 2;
    }
    return 2 * (n - p) + 1;
}

int main() {
    int n;
    cin >> n;
    cout << "survivor: " << getShooter(n) << "\n";
}
