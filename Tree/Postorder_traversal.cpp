#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void postorder(Node* root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->left->right->left = new Node(6);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 7   8
    //       /     / \
    //      6     9   10

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}