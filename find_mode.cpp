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

int main()
{
  int n;
  cout << "Please enter the size of the vector : ";
  cin >> n;
  vector<int> v = takeInput(n);

  int max_freq = 0;
  int freq = 0;
  vector<int> modes;

  unordered_map<int, int> freq_map;
  for (int i = 0; i < v.size(); i++)
  {
    freq_map[v[i]]++;

    freq = freq_map[v[i]];

    if(freq>max_freq){
      modes.clear();
    }

    max_freq = max(freq,max_freq);

    if(freq==max_freq){
      modes.push_back(v[i]);
    }

  }
  cout<<endl<<"here are the modes"<<endl;
  printVector(modes);

}