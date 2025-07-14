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
    if(s1.size()==capacity){
        cout<<"ayo stack overlfow";
        return;
    }

    s2.push(element);

    while (!s1.empty()) {

        s2.push(s1.top());
        s1.pop();

    }
    swap(s1,s2);
}

void Queue::pop(){
    if(s1.empty()){
        cout<<"stack underflow";
        return;
    }

    s1.pop();
}

int Queue::front(){
    if(s1.empty()){
        cout<<"stack is empty";
        return -1;
    }

    return s1.top();
}

int main(){

}
