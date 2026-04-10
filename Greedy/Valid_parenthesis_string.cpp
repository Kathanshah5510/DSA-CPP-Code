#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "(*))";
    int leftBalance = 0, rightBalance = 0;
    // for(char c : s){
    //     if(c == '('){
    //         leftBalance++;
    //         rightBalance++;
    //     }
    //     else if(c == ')'){
    //         if(leftBalance > 0){
    //             leftBalance--;
    //         }
    //         rightBalance--;
    //     }
    //     else{
    //         if(leftBalance > 0){
    //             leftBalance--;
    //         }
    //         rightBalance++;
    //     }
    //     if(rightBalance < 0){
    //         cout << 0 << endl;
    //         return 0;
    //     }
    // }
    // cout << leftBalance + rightBalance << endl;

    int leftPar = 0, rightPar = 0;
    bool isValid = false;

    for(char c : s){
        if(c == '('){
            leftPar++;
        }
        else if(c == ')'){
            rightPar++;
        }
        else{
            leftPar++;
            rightPar++;
        }
    }
    if(rightPar - leftPar == 1 || rightPar - leftPar == 0 || rightPar - leftPar == -1){
        isValid = true;
    }
    cout << isValid << endl;

    return 0;
}