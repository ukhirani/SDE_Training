#include <bits/stdc++.h>
using namespace std;

int getShooter(int n) {
    int p = 1;
    while (p * 2 <= n) {
        p *= 2;
    }
    return 2 * (n - p) + 1;
}
int getShooterByBit(int n){
    int pow2 = (int)floor(log2(n));
    int mask = (1<<pow2);
    n^=mask;
    n<<=1;
    n+=1;
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << "survivor: " << getShooter(n) << "\n";
    cout << "survivor: " << getShooterByBit(n) << "\n";


}
