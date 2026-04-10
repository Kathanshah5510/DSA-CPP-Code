#include<bits/stdc++.h>
using namespace std;

int count_like_dislike (string A, string P) {
   // Write your code here
   int n = A.length();
   int count = 0;
   for(int i = 0; i < n; i++){
    
    if(A[i] == P[i]){
        count++;
    }
    
   }
   return count;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string A;
    cin >> A;
    string P;
    cin >> P;

    int out_;
    out_ = count_like_dislike(A, P);
    cout << out_;
}