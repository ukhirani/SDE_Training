#include"bits/stdc++.h"
using namespace std;

double fibonacciBinet(int n, double sqrt5 ,double phi,double theta) {

    double fib_n = (pow(phi, n) - pow(theta, n)) / sqrt5;
    return round(fib_n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    double theta = (1 - sqrt5) / 2;

    cout << "Fibonacci number F(" << n << ") = " << fibonacciBinet(n,sqrt5,phi,theta) << endl;
    cout << "phil = " << phi  << "theta = " << theta << endl;
    cout << "phil + theta = " << phi + theta << endl;
    cout << "phil * theta = " << phi * theta << endl;

    return 0;
}
