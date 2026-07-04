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

int main(){
    struct Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    vector<vector<int>> result;
    if(root == NULL){
        return 0;
    }

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while(!q.empty()){
        int size = q.size();
        vector<int> row(size);
        for(int i = 0; i < size; i++){
            Node* node = q.front();
            q.pop();

            int index;
            if(leftToRight) index = i;
            else index = size - 1 - i;

            row[index] = node->data;

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        result.push_back(row);
        leftToRight = !leftToRight;
    }
    cout << "Zigzag Level Order Traversal: " << endl;
    for(const auto& row : result){
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}