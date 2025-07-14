#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){//empty constructor
        data = 0;
        next = nullptr;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};


class LinkedList{
    public:
    Node* head;

    LinkedList(){
        // head = new Node();
        // head->next = nullptr;
    }
    LinkedList(int data1){
        head = new Node(data1);
        // head->next = nullptr;
        // head->data = data1;
    }

    void insertNode(int data);
    // void insertNode(int pos,int data);
    void deleteNode(int pos);
    // void deleteNode(Node* node);
    bool searchValue(int val);
    void printList();

};

void LinkedList::printList(){
    Node* temp = head;
    cout<<"here is the linked list"<<endl;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
void LinkedList::insertNode(int data){
    Node* temp = head;
    if(!temp){
        head = temp;
    }
    while(temp && temp->next){
        temp = temp->next;
    }
    Node* hello = new Node(data);
    temp->next = hello;
}
void LinkedList::deleteNode(int pos){
    Node* temp = head;
    while(pos-- && temp){
        temp = temp->next;
    }
    if(temp==nullptr) return;
    if(temp->next == nullptr){
        temp = nullptr;
        return;
    }
    temp->data = temp->next->data;
    temp->next = temp->next->next;
}

// bool LinkedList::searchValue(int val){
//     Node* temp = head;
//     while(temp){
//         if(temp->data==val){
//             return true;
//         }
//         return false;
//     }

// }

void fun(vector<int> *v){
    for(int i = 0; i<(*v).size();i++){
        cout<<(*v)[i]<<endl;
    }
}
int main(){
    vector<int> v = {1,2,4,4,5,5};
    fun(&v);
}
