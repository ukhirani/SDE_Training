#include<bits/stdc++.h>
using namespace std;


int findMaxElement(vector<int> hello){
  int max_arr = hello[0];
  for(int i = 0; i<hello.size();i++){
    max_arr = max(hello[i],max_arr);
  }
  return max_arr;

}

vector<int> takeInput(int n){
  vector<int> arr(n) ;

  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }
  return arr;
}


int main ()
{
  int n;
  cout<<"Please enter the size of the vector : ";
  cin >> n ;
  vector<int> v = takeInput(n);
  cout<<"This is the Maximum Element : "<<findMaxElement(v)<<endl;

}
