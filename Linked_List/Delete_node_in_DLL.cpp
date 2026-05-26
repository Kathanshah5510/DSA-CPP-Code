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
    vector<int> arr = {1,2,3,4};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = temp->next;
    }

    // Printing the whole DLL
    cout << "Printing the whole DLL: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete at head
    Node* temp1 = head;
    head = head->next;
    head->prev = nullptr;
    delete temp1;

    // Printing the whole DLL after deleting at head
    cout << "Printing the whole DLL after deleting at head: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete at tail
    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node* temp2 = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete temp2;

    // Printing the whole DLL after deleting at tail
    cout << "Printing the whole DLL after deleting at tail: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete at middle
    Node* temp3 = head->next;
    head->next = temp3->next;
    if(temp3->next != nullptr){
        temp3->next->prev = head;
    }
    delete temp3;
    
    // Printing the whole DLL after deleting at middle
    cout << "Printing the whole DLL after deleting at middle: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}