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
    vector<int> arr{1,2,3,4,5};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = temp->next;
    }

    // Inserting at head
    Node* newNode = new Node(0);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    // Printing the DLL
    cout << "DLL after inserting at head: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    // Inserting at tail
    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node* newNode1 = new Node(6);
    tail->next = newNode1;
    newNode1->prev = tail;

    // Printing the DLL
    cout << "DLL after inserting at tail: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Inserting in middle
    temp = head;
    int position = 3;
    for(int i = 1; i < position; i++){
        temp = temp->next;
    }
    Node* newNode2 = new Node(67);
    newNode2->next = temp->next;
    newNode2->prev = temp;
    if(temp->next != nullptr){
        temp->next->prev = newNode2;
    }
    temp->next = newNode2;
    
    // Printing the DLL
    cout << "DLL after inserting in middle: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}