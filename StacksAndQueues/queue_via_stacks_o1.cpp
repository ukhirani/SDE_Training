//3. Implementation of Queue via stacks in amortized O(1) time complexity.

#include <bits/stdc++.h>
#include <bits/types/stack_t.h>
using namespace std;

class Queue{
    public:
    stack<int> s1,s2;
    int capacity;


    Queue(int size1){
        capacity = size1;
    }
    void push(int element);
    void pop();
    int front();
};

void Queue::push(int element){
    if((s1.size() + s2.size())==capacity){
        cout<<"ayo stack overlfow";
        return;
    }

    s1.push(element);

}

void Queue::pop(){
    if(s2.empty() && s1.empty()){
        cout<<"stack underflow";
        return;
    }

    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        return;
    }

    s2.pop();
}

int Queue::front(){
    if(s2.empty() && s1.empty()){
        cout<<"stack underflow";
        return '\0';
    }

    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

    }
    return s2.top();
}

int main(){

}
