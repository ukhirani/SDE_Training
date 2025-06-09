#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
  int factors = 0;

  for(int i = 2 ;i<=n;i++){

    if(n%i==0){

      factors++;

      if(factors>1){
        return false;

      }
    }

  }

  return factors == 1;
}
int main(){
  int n;
  cout<<"Please enter the number till which you want to print the prime numbers : ";
  cin >> n ;

  for(int i = 1;i<=n;i=i+2){
    if(i==3){
      cout<<2<<endl;
    }
    if(isPrime(i)){
    cout << i << endl;

  }
  }


}