#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void levelorder(Node* root, int level, vector<vector<int>> &ans){
    if(root == nullptr) return;

    if(level == ans.size()){
        ans.push_back({});
    }
    ans[level].push_back(root->data);
    levelorder(root->left, level + 1, ans);
    levelorder(root->right, level + 1, ans);
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
    
    vector<vector<int>> ans;
    levelorder(root, 0, ans);
    cout << "BFS or Level-order Traversal: ";
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
    }
    cout << endl;
}