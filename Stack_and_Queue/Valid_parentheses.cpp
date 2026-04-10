#include <bits/stdc++.h>
using namespace std;

int main(){
    // string s = "([{}])";
    string s = "(";
    // string s = "[]({})";

    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(st.empty()){
                cout << "Not valid parentheses" << endl;
                return 0;
            }
            char top = st.top();
            if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                st.pop();
            }
            else{
                cout << "Not valid parentheses" << endl;
                return 0;
            }
        }
    }
    cout << "Valid parentheses" << endl;



    return 0;
}