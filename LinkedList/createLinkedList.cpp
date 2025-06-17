#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* ptr){
        data = data1;
        next = ptr;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* index = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        index->next = temp;
        index = temp;
    }
    return head;
}
void printLL(Node* head){
    Node* ptr = head;
    while(ptr){
        cout<<ptr->data<<"\t";
        ptr = ptr->next;
    }
    cout<<endl;
    // cout<<ptr->data<<"\t";
}
int lengthLL(Node* head){
    int count = 0;
    Node* ptr = head;
    while(ptr){
        count++;
        ptr = ptr->next;
    }
    return count;
}

bool searchLL(Node* head,int target){
    Node* ptr = head;
    while(ptr){
        if(ptr->data == target){
            return true;
        }else{
            ptr = ptr->next;
        }
    }
    return false;
}
int main(){

    vector<int> arr = {1};
    Node* head = convertLL(arr);
    // cout<<head->data;
    printLL(head);
    cout<<"Length : "<<lengthLL(head)<<endl;
    cout<<"Found 1 : "<<searchLL(head, 2)<<endl;
}
