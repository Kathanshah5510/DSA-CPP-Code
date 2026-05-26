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
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the nodes: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = new Node(arr[0]);\
    Node* temp = head;
    for(int i = 1; i < n; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Printing the original LL
    cout << "Original LL: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // // Reversing the LL by pointers
    // Node* prev = nullptr;
    // temp = head;
    // while(temp != nullptr){
    //     Node* next = temp->next;
    //     temp->next = prev;
    //     prev = temp;
    //     temp = next;
    // }
    // head = prev;

    // Reversing LL by recursion
    function<Node*(Node*)> reverse = [&](Node* node){
        if(node == nullptr || node->next == nullptr){
            return node;
        }
        Node* newHead = reverse(node->next);
        node->next->next = node;
        node->next = nullptr;
        return newHead;
    };
    head = reverse(head);

    // Printing the reversed LL
    cout << "Reversed LL: ";
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}