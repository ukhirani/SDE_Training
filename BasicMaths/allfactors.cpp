#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main() {
int n;
cin>>n;
unordered_map<int,int> mp;
int answer, count = 0;
// mp[1]++;
while(n>1){
    for(int i = 2;i<=n;i++){
        count++;
        if((n%i)==0){
            answer = i;
            mp[i]++;
            break;
        }
    }
    n = n/answer;
}
for(auto [i,freq]:mp){
    cout<<i<<" : "<<freq<<endl;
}
cout<<count<<"\n";
}
