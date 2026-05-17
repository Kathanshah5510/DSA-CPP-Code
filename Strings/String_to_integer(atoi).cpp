#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int i = 0, n = s.size(), sign = 1;
    if(i < n && (s[i] == '+' || s[i] == '-')){
        if(s[i] == '-') sign = -1;
        i++;
    }

    long long num = 0;
    while(i < n && (isdigit(s[i]) || s[i] == ' ')){
        if(isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        }
        if(num * sign > INT_MAX) {
            cout << INT_MAX << endl;
            return 0;
        }
        if(num * sign < INT_MIN) {
            cout << INT_MIN << endl;
            return 0;
        }
        i++;
    }
    cout << num * sign << endl;

    return 0;
}