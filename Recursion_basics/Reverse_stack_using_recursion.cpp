#include <bits/stdc++.h>
using namespace std;

void stackReverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int topElement = s.top();
    s.pop();
    stackReverse(s);
    s.push(topElement);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    stackReverse(s);
    cout << "Reversed stack: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}