#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,5,0};
    int num;

    cout << "Enter the element to be searched: ";
    cin >> num;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == num){
            cout << "Element found at index: " << i << endl;
            break;
        }
        else{
            cout << "Element not found" << endl;
            break;
        }
    }

    return 0;
}