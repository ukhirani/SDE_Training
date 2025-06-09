#include<bits/stdc++.h>
using namespace std;


vector<int> swapVector(vector<int> hello){
  for(int i = 0; i<hello.size()/2;i++){
    swap(hello[i],hello[hello.size()-i-1]);
  }
  return hello;

}

vector<int> takeInput(int n){
  vector<int> arr(n) ;

  for(int i = 0; i<n;i++){
    cin>>arr[i];
  }
  return arr;
}

void printVector(vector<int> hello){
  for(int i = 0; i<hello.size();i++){
    cout<<hello[i]<<"\t";
  }
  cout<<endl<<endl;
}

vector<int> rotateVector(vector<int> hello,int n){

  
  vector<int> first_part;
  int size = hello.size();
  n = n%size;
  //let's get the last n elements and push it in a vector
  for(int i = size-n;i<size;i++){
    first_part.push_back(hello[i]);
  }

  //now let's shift the remaining elements
  for(int i = size-1;i>n-1;i--){
    hello[i] = hello[i-n];
    
  }

  for(int i = 0;i < n;i++){
    hello[i] = first_part[i];

  }

  return hello;

}
int main ()
{
  int n;
  cout<<"Please enter the size of the vector : ";
  cin >> n ;
  vector<int> v = takeInput(n);
  printVector(v);
  int k;
  cout<<"Please enter the rotate size : ";
  cin >> k ;
  printVector(rotateVector(v,k));}
