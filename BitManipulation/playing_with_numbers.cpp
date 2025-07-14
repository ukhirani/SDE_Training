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

long long getXOR(long long n){
    long long rem = n%4;
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
    long long left;
    long long right;
    cin>>left>>right;
    long long answer = 0;
    long long index = 0;
    long long cycle = 0;
    long long remainder = 0;
    long long diff = 0;

    if(left==right){
        cout<<getXOR(left)<<endl;
        return;
    }
    for(long long i = left;i<=right;i++){

        if((i%4)==3){
            index = i;
            break;
        }
        answer^=getXOR(i);

    }
    diff = right - index + 1;
    cycle = diff/4;
    remainder = diff%4;
    answer^=(cycle%2)*2;

    index = right - remainder + 1;
    for(long long i = index;i<=right;i++){
        answer^=getXOR(i);
    }






    cout<<answer<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Prlong long output to STDOUT */
    long long tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
