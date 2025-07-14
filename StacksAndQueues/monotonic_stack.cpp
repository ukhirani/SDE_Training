#include <bits/stdc++.h>
#include <vector>
using namespace std;
stack<int> increasing_stack(vector<int> &v){
    stack<int> hello;
    for(int i = 0;i<v.size();i++){

            while(!hello.empty() && v[i]<hello.top()){

                    hello.pop();

            }
                hello.push(v[i]);

    }
    return hello;
}

stack<int> decreasing_stack(vector<int> &v){
    stack<int> hello;
    for(int i = 0;i<v.size();i++){
        if(hello.empty()){
            hello.push(v[i]);
            continue;
        }else{
            while(!hello.empty() && v[i]>hello.top()){
                if(hello.empty()){
                   hello.push(v[i]);
                   break;
                }else{
                    hello.pop();
                }

            }
                hello.push(v[i]);
                // break;

        }
    }
    return hello;
}

void printStack(stack<int> hello){
    while(!(hello.empty())){
        cout<<hello.top()<<endl;
        hello.pop();
    }
}

int main(){
    vector<int> hello = {1,2,3,4,5,2,2,3,4,5};
    cout<<"Increasing Stack"<<endl;
    printStack(increasing_stack(hello));
    cout<<"Decreasing Stack"<<endl;
    printStack(decreasing_stack(hello));
}
