#include<bits/stdc++.h>
using namespace std;




void recursiveFunction(int n){

    if(n==1){
        cout << n;
    }
    recursiveFunction(n-1);
    cout<<n;


}
void print_n_to_i(int n){

if(n>=1){
  cout<<n<<"\t";
  n--;
  print_n_to_i(n);
}else{
  cout<<endl;
}


}

int factorial(int n){
  if(n==0){
    return 1;
  }

  return n*factorial(n-1);


}

int fibonacci(int n){
  if(n<2){
    return n;
  }else{
    int hello = fibonacci(n-1) + fibonacci(n-2);
    cout<<hello;
    return hello;
  }

}
int main ()
{
  int n;
  cout<<"Please enter the size of the vector : ";
  cin >> n ;
  recursiveFunction(n);
  // print_n_to_i(n);


  // int factorial_answer = factorial(n);
  // cout<<factorial_answer;

  // int fibonacci_answer = fibonacci(n);
  // cout<<fibonacci_answer;



}
