#include <bits/stdc++.h>
using namespace std;

// void rec(int num){
//     if(num == 0) return;
//     cout << num << endl;
//     rec(num - 1);
// }

void rec(int i, int num){
    if(i > num){
        return;
    }
    rec(i+1, num);
    cout << i << endl;
}

int main(){
    int n;
    cout << "Enter the number upto which you want to print: ";
    cin >> n;
    // rec(n);
    rec(1, n);

    return 0;
}