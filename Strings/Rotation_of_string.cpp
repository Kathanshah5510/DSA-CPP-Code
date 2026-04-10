#include <bits/stdc++.h>   
using namespace std;

int main(){
    string s = "rotation";
    string goal = "tationro";
    // cout << "Enter string s: ";
    // cin >> s;
    // cout << "Enter string goal: ";
    // cin >> goal;

    if(s.size() != goal.size()){
        cout << "Not a rotation" << endl;
        return 0;
    }

    // for(char c : s){
    //     goal.push_back(c);
    // }
    // if(goal.find(s) != string::npos){
    //     cout << "Is a rotation" << endl;
    // } else {
    //     cout << "Not a rotation" << endl;
    // }

    for(int i = 0; i < s.size(); i++){
        rotate(s.begin(), s.begin() + 1, s.end());
        if(s == goal){
            cout << "Is a rotation" << endl;
            return 0;
        }
    }

    cout << "Not a rotation" << endl;

    return 0;
}