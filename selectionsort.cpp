#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
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

void SelectionSort(vi &arr){
    int size = arr.size();
    int index = 0;
    int min_index;
    while(index<size){
        //find the minimum
        min_index = distance(arr.begin(),min_element(arr.begin()+index,arr.end()));
        if(min_index!=index){
            swap(arr[min_index],arr[index]);
        }
        index++;
    }
}

int main() {
  vector<int> v = takeInput();
  cout << "Here is the input vector " << endl;
  printVector(v);
  SelectionSort(v);
  cout << "Here is the input vector after selection sort" << endl;
  printVector(v);






}
