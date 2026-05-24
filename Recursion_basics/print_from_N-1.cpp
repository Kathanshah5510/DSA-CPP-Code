#include <bits/stdc++.h>
using namespace std;

void rec(int num){
    if(num == 0) return;
    cout << num << endl;
    rec(num - 1);
}

int main(){
    int n;
    cout << "Enter till which number you want to print: ";
    cin >> n;
    rec(n);

    return 0;
}