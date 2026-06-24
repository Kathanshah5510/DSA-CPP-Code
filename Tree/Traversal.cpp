#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << root->data << " ";
    cout << root->left->data << " ";
    cout << root->right->data << " ";
    cout << root->left->left->data << " ";
    cout << root->left->right->data << " ";
    cout << root->right->left->data << " ";
    cout << root->right->right->data << " ";
    cout << endl;

    //         1
    //       /   \
    //      /     \
    //     2       3
    //    / \     / \
    //   4   5   6   7

    // DFS(Preorder, Inorder, Postorder)
    // Preorder: 1 2 4 5 3 6 7
    // Inorder: 4 2 5 1 6 3 7
    // Postorder: 4 5 2 6 7 3 1

    return 0;
}