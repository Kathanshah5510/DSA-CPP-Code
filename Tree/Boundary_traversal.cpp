// left boundary without leaf nodes, leaf nodes, right boundary reversed without leaf nodes

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);

    vector<int> boundary;

    if(root == NULL){
        return 0;
    }

    // Add left boundary (excluding leaf nodes)
    Node* curr = root->left;
    while(curr){
        if(curr->left || curr->right) boundary.push_back(curr->data);
        if(curr->left) curr = curr->left;
        else curr = curr->right;
    }

    // Add leaf nodes
    function<void(Node*)> addLeaves = [&](Node* node){
        if(!node) return;
        if(!node->left && !node->right){
            boundary.push_back(node->data);
            return;
        }
        addLeaves(node->left);
        addLeaves(node->right);
    };
    addLeaves(root);

    // Add right boundary (excluding leaf nodes)
    stack<int> rightBoundary;
    curr = root->right;
    while(curr){
        if(curr->left || curr->right) rightBoundary.push(curr->data);
        if(curr->right) curr = curr->right;
        else curr = curr->left;
    }
    while(!rightBoundary.empty()){
        boundary.push_back(rightBoundary.top());
        rightBoundary.pop();
    }

    cout << "Boundary Traversal: ";
    for(int val : boundary){
        cout << val << " ";
    }
    cout << endl;
}