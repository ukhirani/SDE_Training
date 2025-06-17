#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef vector<int> vi;

vector<int> takeInput() {

  int n;
  cout << "Please enter the size of the vector : ";
  cin >> n;
  vi arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  return arr;
}
void printVector(vector<int> hello) {
  for (int i = 0; i < hello.size(); i++) {
    cout << hello[i] << "\t";
  }
  cout << endl << endl;
}

void bubbleSort(vi &v) { // Time Complexity = O(n2) : Space Complexity O(1)
  bool flag = false;
  int size = v.size();
  while (!flag) {
    // check if sorted
    flag = true;
    for (int i = 0; i < size - 1; i++) {
      if (v[i] > v[i + 1]) {
        flag = false;
      }
    }

    if (flag) {
      break;
    }

    for (int i = 0; i < size - 1; i++) {
      if (v[i] > v[i + 1]) {
          swap(v[i],v[i+1]);
      }
    }
  }
}

int main() {
  vector<int> v = takeInput();
  cout << "Here is the input vector " << endl;
  printVector(v);
  bubbleSort(v);
  printVector(v);
}
