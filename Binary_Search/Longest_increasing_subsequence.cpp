#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> tails;
    for(int num : arr){
        int pos = lower_bound(tails.begin(), tails.end(), num) - tails.begin();
        if(pos == tails.size()){
            tails.push_back(num);
        } else {
            tails[pos] = num;
        }
    }
    cout << "The length of the longest increasing subsequence is: " << tails.size() << endl;

    return 0;
}