#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a string with parenthesis: ";
    cin >> s;

    int maxi = 0, count = 0;
    for(auto &i: s){
        if( i == '('){
            count++;
        }
        else if(i == ')'){
            count--;
        }
        else continue;
        maxi = max(maxi, count);
    }

    cout << "Maximum nesting depth of parentheses is: " << maxi << endl;
    return 0;
}