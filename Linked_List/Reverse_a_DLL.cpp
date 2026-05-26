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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;

    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;

    // Printing the original DLL
    cout << "Original DLL: ";
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // // Reversing the DLL using stack
    // stack<Node*> st;
    // temp = head;
    // while(temp != nullptr){
    //     st.push(temp);
    //     temp = temp->next;
    // }
    // head = st.top();
    // st.pop();
    // temp = head;
    // while(!st.empty()){
    //     temp->next = st.top();
    //     st.top()->prev = temp;
    //     temp = st.top();
    //     st.pop();
    // }
    // temp->next = nullptr;

    // Reversing the DLL using 3 pointers
    if (head == nullptr || head->next == nullptr) return 0;
    Node* curr = head;
    Node* prev = nullptr;
    while(curr != nullptr){
        Node* next = curr->next;
        curr->next = prev;
        curr->prev = next;
        prev = curr;
        curr = next;
    }
    head = prev;

    // Printing the reversed DLL
    cout << "Reversed DLL: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;


    return 0;
}