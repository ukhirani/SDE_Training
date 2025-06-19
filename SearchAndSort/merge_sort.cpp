#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

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
vi mergeHello(vi a,vi b){
    int m = a.size();
    int n = b.size();
    vi answer(m+n);
    int i = 0,j = 0,k = 0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            answer[k++] = a[i++];
        }else{
            answer[k++] = b[j++];
        }
    }
    while(i<m){
        answer[k++] = a[i++];
    }
    while(j<n){
        answer[k++] = b[j++];
    }
    return answer;

}
vi mergeSort(vi& v){
    int size = v.size();
    if(size==1){
        return v;
    }else{

        int mid = size/2;
        vi first(v.begin(),v.begin()+mid);
        vi last(v.begin()+mid,v.end());
        return mergeHello(mergeSort(first),mergeSort(last));
    }
}


int main ()
{
  int n;
  cout<<"Please enter the size of the vector : ";
  cin >> n ;
  vector<int> v = takeInput(n);
  cout<<"Here is the input vector "<<endl;
  printVector(v);

  vi answer = mergeSort(v);
  printVector(answer);

}
