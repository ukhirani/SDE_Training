#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//1- Find the remainder of n by moduling it with 4.
// 2- If rem = 0, then XOR will be same as n.
// 3- If rem = 1, then XOR will be 1.
// 4- If rem = 2, then XOR will be n+1.
// 5- If rem = 3 ,then XOR will be 0.

int getXOR(int n){
    int rem = n%4;
    if(rem==0){
        return n;
    }
    if(rem==1){
        return 1;
    }
    if(rem==2){
        return n+1;
    }
    if(rem==3){
        return 0;
    }

    return n;

}

void solve(){
    int left;
    int right;
    cin>>left>>right;

    // diff+1 odd even
    int answer = 0;

    int diff = left - right + 1;
    left++;
    while(left<=right){
        answer^=left;
        left+=2;
    }

    if(diff%2){
        answer^=getXOR(right);
    }




    cout<<answer<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
