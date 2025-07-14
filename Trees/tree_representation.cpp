#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }


};


int main(){
Node* root = new Node(5);

Node* left_node = new Node(2);
Node* right_node = new Node(3);

root->left = left_node;
root->right = right_node;
}
