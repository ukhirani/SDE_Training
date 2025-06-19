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

void quickSort(vi &arr, int low, int high) {
    if (low < high) {
        int pivot = arr[low];
        int i = low + 1;
        int j = high;

        while (i <= j) {
            while (i < high && arr[i] <= pivot)
                i++;
            while (j > low && arr[j] > pivot)
                j--;

            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[low], arr[j]);
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}


int main() {
  vector<int> v = takeInput();
  cout << "Here is the input vector " << endl;
  printVector(v);
  quickSort(v, 0, v.size() - 1);
  printVector(v);
  return 0;
}
