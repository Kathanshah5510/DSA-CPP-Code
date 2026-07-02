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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

int isBalanced(Node* root){
    if(root == NULL){
        return 1;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
        return 1;
    }
    return 0;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    if(isBalanced(root)){
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    return 0;
}