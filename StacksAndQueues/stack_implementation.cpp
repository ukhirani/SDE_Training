#include <bits/stdc++.h>
#include <chrono>
#include <vector>
using namespace std;
class Stack{
    public:
    int size;
    vector<int> v;
    int top;

    public:
    Stack(int size1){
        int size = size1;
        int top = -1;
        vector<int> v(size1);
    }

    public:
    int getTop(Stack stack){
        int answer = stack.v[stack.top];
        return answer;
    }

    int popStack(Stack stack){
        int answer = INT_MIN;
        if(stack.top==-1){
            return answer;
        }else{
            answer = stack.getTop(stack);
            stack.top--;
        }
        return answer;
    }

    bool PushStack(Stack stack,int element){
        if(stack.top+1==stack.size){
            return false;
        }else{
            stack.top++;
            stack.v[stack.top] = element;
        }
        return true;
    }
};

int main(){
Stack* hello = new Stack(6);
cout<<hello->v.size();

}
