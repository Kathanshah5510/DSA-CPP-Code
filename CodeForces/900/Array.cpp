#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while(t--){
        int n;
        cout << "Enter n: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter arr: ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        vector<int> ans;
        for(int i = 0; i < n; i++){
             int greaterCount = 0;
            int smallerCount = 0;

            for(int j = i + 1; j < n; j++) {

                if(arr[j] > arr[i]) {
                    greaterCount++;
                }
                else if(arr[j] < arr[i]) {
                    smallerCount++;
                }
            }

            ans.push_back(max(greaterCount, smallerCount));
        }
        
        for(int i = 0; i < n; i++){
            cout << ans[i] << ' ';
        }
    }
    return 0;
}