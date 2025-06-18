#include <bits/stdc++.h>
using namespace std;
int countNumberOfSetBits(int n){
    int input = n;
    int count = 0;
    while(n){
        count+=(n & 1);
        n>>=1;
    }
    cout<<"The number of set bits in "<< input <<" = "<<count<<endl;
    return count;
}
int main(){

    int num;
    cin >> num;
    countNumberOfSetBits(num);

}
