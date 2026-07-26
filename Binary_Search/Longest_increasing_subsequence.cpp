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

    // vector<int> tails;
    // for(int num : arr){
    //     int pos = lower_bound(tails.begin(), tails.end(), num) - tails.begin();
    //     if(pos == tails.size()){
    //         tails.push_back(num);
    //     } else {
    //         tails[pos] = num;
    //     }
    // }
    // cout << "The length of the longest increasing subsequence is: " << tails.size() << endl;

    vector<int> temp;
    temp.push_back(arr[0]);
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > temp.back()){
            temp.push_back(arr[i]);
        }
        else{
            int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
            temp[ind] = arr[i];
        }
    }
    cout << "The length of the longest increasing subsequence is: " << temp.size() << endl;

    return 0;
}