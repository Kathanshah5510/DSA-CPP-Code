#include <bits/stdc++.h>
using namespace std;

// class Node{
//     public: 
    
//     int data;
//     Node* next;

//     Node(int data1, Node* next1){
//         this->data = data1;
//         this->next = next1;
//     }

//     Node(int data1){
//         data = data1;
//         next = NULL;
//     }
// };


struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int target = 3;
    Node* current = head;
    bool found = false;

    while (current != nullptr) {
        if (current->data == target) {
            found = true;
            break;
        }
        current = current->next;
    }

    if (found) {
        cout << "Element " << target << " found in the linked list." << endl;
    } else {
        cout << "Element " << target << " not found in the linked list." << endl;
    }

    // Clean up memory
    current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
