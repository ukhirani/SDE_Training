#include <chrono>
#include <iostream>
using namespace std;
using namespace chrono;
int main() {

  auto start = high_resolution_clock::now();

  // funciton execution

  auto end = high_resolution_clock::now();
  auto duration = duration_cast<nanoseconds>(end - start);

  cout << "Execution time: " << duration.count() << " nanoseconds" << endl;

  return 0;
}
