#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;
class Stack {
public:
  vector<int> stek;
  int size = 0;
  int top = -1;
  int capacity;
  Stack(int size1) { this->capacity = size1; }
  void push(int element);
  void pop();
  int getTop(void);
};
// void printStack(Stack* s){
//     while(s->size==0){

//     }


// }
void Stack::push(int element) {
    if(top==capacity){
        cout<<"u r gay"<<endl;
        return;
    }
    size++;
    stek[++top] = element;
}



void Stack::pop() {
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
        return ;
    }

    stek[top--] = '\0';
    size--;
}

int Stack::getTop() {

  if (top == (-1)) {
    cout << "The Stack is empty bro !!" << endl;
    return INT_MIN;
  }

  return stek[top];
}

int main() {
    Stack* hello = new Stack(5);
}
