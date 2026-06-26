#include <bits/stdc++.h>
using namespace std;

struct Node{
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

    vector<int> ans;
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* node = st.top();
        st.pop();
        ans.push_back(node->data);

        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
    }

    cout << "Pre-order Traversal: ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}