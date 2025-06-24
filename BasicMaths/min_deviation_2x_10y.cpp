#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int count = 0;
    int x = 1;
    long long val = 2;
    for (int y = 1; y <= 9; ++y) {
        int power = pow(10, y);

        while ( (double)power/(double)val>1) {
            count++;
            val*=2;
            x++;
        }

        cout << "10^" << y << " <------>  2^" << x << "\n";
    }
    cout<<count<<" no. of iterations"<<endl;
}
