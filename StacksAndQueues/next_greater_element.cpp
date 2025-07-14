#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> input = {1,7,9,5,8,10};
    stack<int> s;

    for(int i = input.size()-1;i>=0;i--){

        if(s.empty()){
            input[i] = -1;
            s.push(input[i]);
            continue;
        }

        input[i] = s.top();

        while (!s.empty() && s.top()<input[i]) {
            s.pop();
        }
        s.push(input[i]);

    }

    for(int x:input){
        cout<<x<<endl;
    }

    return 0;
}
