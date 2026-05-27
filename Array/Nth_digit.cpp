#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    long long digit = 9;
    int first = 1;
    int length = 1;

    while(n > digit * length){
        n -= digit * length;
        length++;
        first *= 10;
        digit *= 10;
    }

    first = first + (n - 1) / length;
    string str = to_string(first);
    cout << str[(n - 1) % length] - '0';

    return 0;
}