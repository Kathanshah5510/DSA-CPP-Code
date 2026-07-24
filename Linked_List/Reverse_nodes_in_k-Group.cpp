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

Node* reverseKGroup(Node* head, int k){
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prevTail = dummy;

    while(true){
        Node* check = prevTail;
        for(int i = 0; i < k; i++){
            check = check->next;
            if(check == nullptr) return dummy->next;
        }

        Node* curr = prevTail->next;
        Node* prev = nullptr;
        for(int i = 0; i < k; i++){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        Node* oldHead = prevTail->next;
        prevTail->next = prev;
        oldHead->next = curr;
        prevTail =  oldHead;
    }
}

int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the nodes: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < n; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    // int count = 0;
    // temp = head;
    // while(count < k && temp != nullptr){
    //     temp = temp->next;
    //     count++;
    // }

    head = reverseKGroup(head, k);
    temp = head;
    while (temp != nullptr){
        cout << temp->data;
        if (temp->next != nullptr) cout;
        temp = temp->next;
    }
    cout << endl;

    return 0;
}