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

bool isSameTree(Node* p, Node* q) {
    if (p == NULL || q == NULL) return (p == q);
    return (p->data == q->data) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main(){
    struct Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    struct Node* root2 = new Node(1);
    root2->left = new Node(3);
    root2->right = new Node(2);

    if(isSameTree(root1, root2)){
        cout << "The two binary trees are the same." << endl;
    } else {
        cout << "The two binary trees are not the same." << endl;
    }

    return 0;
}