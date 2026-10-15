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

int ans = 0; 

int solve(Node* root, int& sum, int& count){
    if(root == nullptr)
        return 0;

    int leftSum = 0, leftCount = 0;
    int rightSum = 0, rightCount = 0;
    solve(root->left, leftSum, leftCount);
    solve(root->right, rightSum, rightCount);
    sum = leftSum + rightSum + root->data;
    count = leftCount + rightCount + 1;
    if(sum / count == root->data)
        ans++;
    return ans;
}

int main(){
    struct Node* root = new Node(4);
    root->left = new Node(8);
    root->right = new Node(5);
    root->left->left = new Node(0);
    root->left->right = new Node(1);
    root->right->right = new Node(6);

    int sum = 0, count = 0;
    int res = solve(root, sum, count);
    cout << "Count of nodes equal to average of subtree: " << res << endl;

    return 0;
}