#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int diameter = 0;

int height(Node* root){
    if(root == nullptr) return 0;

    int left = height(root->left);
    int right = height(root->right);

    diameter = max(diameter, left + right);
    return max(left, right) + 1;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    height(root);
    cout << "Diameter of the binary tree is: " << diameter << endl;

    return 0;
}