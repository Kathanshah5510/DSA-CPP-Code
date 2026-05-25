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
        next = NULL;
    }
};

int main(){
    Node* head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(1);
    head->next->next->next = new Node(9);

    // // Deleting node with value 1
    // Node* temp = head;
    // while(temp->next != NULL){
    //     if(temp->next->data == 1){
    //         temp->next = temp->next->next;
    //         break;
    //     }
    //     temp = temp->next;
    // }

    // // Delete the first node
    // head = head->next;

    // Delete the last node
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;    

    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }


    return 0;
}