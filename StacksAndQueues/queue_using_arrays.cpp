#include <bits/stdc++.h>
#include <bits/types/stack_t.h>
#include <iterator>
using namespace std;

class Queue{
    public:
    vector<int> q;
    int capacity;
    int front = -1;
    int rear = -1;

    Queue(int size1){
        capacity = size1;
    }
    void push(int element);
    void pop();
    int getFront();
};

void Queue::push(int element){

    if(front==-1 && rear==-1){
        q[++front] = element;
        rear++;
    }

    if((rear+1)%capacity == front){
        cout<<"queue overflow";
        return;
    }

    q[(++rear)%capacity] = element;
    rear%=capacity;

}

void Queue::pop(){

    front = (front+1)%capacity;

}

int Queue::getFront(){
return q[front];
}

int main(){

}
