// Let us implement unordered maps, shall we ??

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> hello){
  for(int i = 0; i<hello.size();i++){
    cout<<hello[i]<<"\t";
  }
  cout<<endl<<endl;
}


vector<int> takeInput(int n)
{
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  return arr;
}

vector<int> get_prefix_vector(vector<int> n){
  int size =  n.size();
  int prefix_sum = 0;
  for(int i = 0;i<size;i++){
              prefix_sum+=n[i];
    n[i] = prefix_sum;
  }
  return n;
}

int main()
{
  int n;
  cout << "Please enter the size of the vector : ";
  cin >> n;
  vector<int> v = takeInput(n);

  vector<int> answer = get_prefix_vector(v);
  printVector(answer);

}