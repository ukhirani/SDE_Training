#include <chrono>
#include <iostream>
using namespace std;
using namespace chrono;

void solve() {
  int n = 1e6;
  n = n ^ (n - 1);
  int count = 0;
  while (n) {
    count++;
    n >>= 1;
  }
}
int main() {
  int freq = 1e6;
  int tt = freq;
  auto start = high_resolution_clock::now();
  while (tt--) {
    solve();
  }
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<nanoseconds>(end - start);
  cout << "Execution time: " << duration.count() / freq << " nanoseconds"
       << endl;

  return 0;
}
