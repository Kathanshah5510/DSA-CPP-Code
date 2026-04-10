#include <bits/stdc++.h>
using namespace std;

int helper(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
    // string infix = "(p+q)*(m-n)";
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    stack<char> st;
    string postfix = "";

    for(int i = 0; i < infix.size(); i++){
        if(isalnum(infix[i])){
            postfix += infix[i];
        }
        else if(infix[i] == '('){
            st.push(infix[i]);
        }
        else if(infix[i] == ')'){
            while(st.top() != '(' && !st.empty()){
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && helper(infix[i]) <= helper(st.top())){
                postfix += st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
        
    }
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }

    cout << postfix << endl;



    return 0;
}