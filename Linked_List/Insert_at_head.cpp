#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){
    Node* head = new Node(2);
    head->next = new Node(3);

    cout << "Orginal List: ";
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "Enter value to insert at head: ";
    int x;
    cin >> x;

    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
    cout << "List after inserting at head: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    return 0;
}