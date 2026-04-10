#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> annoyance(n);
        for(int i = 0; i < n; i++){
            cin >> annoyance[i];
        }
        
        vector<int> received(n, 0);
        vector<int> fri(n, 1);
        for(int i = 0; i < n; i++){
            if(fri[i] == 1){
                if(annoyance[i] != received[i]){
                    for(int j = i + 1; j < n; j++){
                        received[j] += 1;
                    }
                } 
                fri[i] = 0;
                
            }
            else{
                continue;
            }
            
        }
        for(int i = 0; i < n; i++){
            cout << received[i] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}
