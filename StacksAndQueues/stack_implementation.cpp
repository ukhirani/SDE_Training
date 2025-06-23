#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Stack{
    public:
    int size;
    vector<int> v;
    int top;

    public:
        Stack(int size1){
        size = size1;
        top = -1;
        v = vector<int>(size1);
    }

    public:
    int getTop(){
        int answer = v[top];
        return answer;
    }

    int getSize(){
        return top+1;
    }

    int popStack(){
        int answer = INT_MIN;
        if(top==-1){
            return answer;
        }else{
            answer = getTop();
            top--;
        }
        return answer;
    }

    bool Pushstack(int element){
        if(top+1==size){
            return false;
        }else{
            top++;
            v[top] = element;
        }
        return true;
    }
};

int main(){
Stack* hello = new Stack(6);
hello->Pushstack(4);
hello->Pushstack(4);
hello->popStack();

cout<<hello->getSize();

}
