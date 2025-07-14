#include <bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
long long answer = 0;

for(long long i = 1;i<=n;i++){
    if(i!=n){
        long long x;
        cin>>x;
        answer^=x;
    }
    answer^=i;
}
cout<<answer;
}
