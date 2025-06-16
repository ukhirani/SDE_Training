#include<bits/stdc++.h>
using namespace std;




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


int BinarySearch(int k,vector<int> v,int low,int high){


    if(low>high){
        return -1;
    }

    int mid = (low + high)/2;


    if(v[mid]==k){
        return mid;
    }
    if(v[mid]>k){
        return BinarySearch(k,  v,low,mid-1);
    }
    if(v[mid]<k){
        return BinarySearch(k,  v,  mid+1, high);
    }

    return -1;

}

int main ()
{
  int n;
  cout<<"Please enter the size of the vector : ";
  cin >> n ;
  vector<int> v = takeInput(n);
  printVector(v);
  int k;
  cout<<"Please enter the element you want to searc : ";
  cin >> k ;

  sort(v.begin(),v.end());
  int low = 0;
  int high = v.size()-1;
  cout<<"This is the index : "<<BinarySearch(k,v,low,high);

}
