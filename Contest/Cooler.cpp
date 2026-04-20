#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        int minutes = 0;
        for(int i = n; i < m; i--){
            minutes += i;
        }
        cout << minutes << endl;
    }
}
