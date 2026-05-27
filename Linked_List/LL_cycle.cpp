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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next;

    Node* slow = head;
    Node* fast = head;
    int count = 0;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        count++;

        if(slow == fast){
            cout << "Cycle detected" << endl;
            cout << "Length of the cycle: " << count << endl;
            break;
        }
    }

    return 0;
}