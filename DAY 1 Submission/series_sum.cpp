#include <iostream>
using namespace std;

int seriesSum(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = seriesSum(n);
    cout << "Sum of series: " << result << endl;

    return 0;
}
