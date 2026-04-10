#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string result;
    int balance = 0;
    for(char c : s){
        if(c == '('){
            if(balance > 0){
                result += c;
            }
            balance++;
        } 
        else{
            balance--;
            if(balance > 0){
                result += c;
            }
        }
    }
    cout << result << endl;



    return 0;
}