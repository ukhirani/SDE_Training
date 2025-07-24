#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
int fibonacci(int n) {
  if (n < 2)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}
const unordered_map<int, int> memo;
int fibonacci_using_dp(int n){
    static unordered_map<int, int> memo;
    if(n<2) return n;

    if(memo.find(n)!=memo.end()){
        return memo[n];
    }
    memo[n] = fibonacci_using_dp(n-1) + fibonacci_using_dp(n-2);
    return memo[n];
}
int main() {
  int n;
  cin >> n;
  cout << fibonacci_using_dp(n) << endl;

}
