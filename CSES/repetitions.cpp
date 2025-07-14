#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long streak = 1;
    char c = s[0];
    long long max_streak = 1;
    for(long long i = 1;i<s.size();i++){
        if(s[i-1]==s[i]){
            streak++;
            max_streak = max(streak,max_streak);
        }else{
            streak = 1;
        }
    }

    cout<<max_streak;
}
