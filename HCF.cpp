#include "bits/stdc++.h"
using namespace std;

int HCF(int a, int b) {

  if (b == 0) {
    return a;
  } else {
    return HCF(b, a % b);
  }
}

int main() {
  int a, b;
  cout << "Enter a and b: ";
  cin >> a >> b;
  cout << "HCF : " << HCF(a, b) << endl;
  return 0;
}
