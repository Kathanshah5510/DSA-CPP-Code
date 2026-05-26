#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};


int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = temp->next;
    }

    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}