#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // int t;
    // cin >> t;
    
    // while(t--){
        int n =2; 
        // cin >> n;
        
        int x1 , y1;
        cin >> x1 >> y1;
        int val = max(x1,y1); 
        for(int i = 0; i < n-1; i++){
            int x, y;
            cin >> x >> y;
            
            if(val < x){
                val = x;
            }
            else if(val > y){
                val = y;
            }
            else{
                continue;
            }
            
            
        }
        cout << val << endl;
    // }
    return 0;
}
