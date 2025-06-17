#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

vector<int> takeInput(int n) {
  vector<int> arr(n);

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
void mergeHello(vi &arr,int low,int mid,int high ) {
  vi answer;
  int i = 0, j = mid+1;
  while (i <= mid && j <= high) {
    if (arr[i] < arr[j]) {
      // answer[k++] = arr[i++];
      answer.push_back(arr[i++]);
    } else {
      // answer[k++] = arr[j++];
      answer.push_back(arr[j++]);
    }
  }
  while (i <=mid) {
      answer.push_back(arr[i++]);
  }
  while (j <= high) {
      answer.push_back(arr[j++]);
  }
  for(int i = low;i<=high;i++){
      arr[i] = answer[i - low];
  }

}
void mergeSort(vi &v,int low,int high) {
    if(low>=high){
        return;
    }
    int mid = (low + high)/2;
    mergeSort(v, low, mid);
    mergeSort(v, mid+1, high);
    mergeHello(v,low,mid,high);
}

int main() {
  int n;
  cout << "Please enter the size of the vector : ";
  cin >> n;
  vector<int> v = takeInput(n);
  cout << "Here is the input vector " << endl;
  printVector(v);
  mergeSort(v,0,v.size()-1);
  printVector(v);
}
