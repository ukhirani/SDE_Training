#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
  queue<int> q1, q2;
  int size;
  int capacity;

  Stack(int size1) {

    size = 0;
    capacity = size1;
  }

  void push(int element);
  void pop();
  int top();
};

void Stack::push(int element) {

  if (q1.size() == capacity)
    return;

  q2.push(element);
  while (!q1.empty()) {
    q2.push(q1.front());
    q1.pop();
  }
  swap(q1, q2);
}

void Stack::pop(){
    if(!q1.empty()){
        q1.pop();
        return;
    }

    cout<<"what you think you tryna do huh ?";
    return;

}

int Stack::top(){
    if(!q1.empty()) return q1.front();
    cout<<"what you think you tryna do huh ?";
    return -1;
}



int main() {
    Stack* hello = new Stack(5);
    hello->push(5);
    hello->push(5);
    hello->push(2);
    hello->push(3);
    cout<<hello->top();
    hello->push(5);
    hello->pop();
    cout<<hello->top();
}
