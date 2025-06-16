#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef vector<int> vi ;

vector<int> takeInput(){

int n;
cout<<"Please enter the size of the vector : ";
cin >> n ;
vi arr(n) ;

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




int main ()
{
  vector<int> v = takeInput();
  cout<<"Here is the input vector "<<endl;
  printVector(v);



}
