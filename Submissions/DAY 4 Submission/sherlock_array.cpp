#include <bits/stdc++.h>
using namespace std;

string balancedSums(vector<int> arr) {
  int size = arr.size();
  string answer = "NO";

  vector<int> prefix_sum(size);
  vector<int> suffix_sum(size);

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
    prefix_sum[i] = sum;
  }

  sum = 0;
  for (int i = size - 1; i >= 0; i--) {
    sum += arr[i];
    suffix_sum[i] = sum;
  }

  for (int i = 0; i < size; i++) {
    if (prefix_sum[i] == suffix_sum[i]) {
      return "YES";
    }
  }

  return answer;
}

int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  string result = balancedSums(arr);
  cout << result << endl;

  return 0;
}
