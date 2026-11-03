#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // -------------------------------------------------------------------------------------------------------------------
    // Brute force approach
    int majority = n / 2;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count > majority){
            cout << "The majority element is: " << nums[i] << endl;
            break;
        }
    }
    cout << "No majority element found." << endl;

    // -------------------------------------------------------------------------------------------------------------------
    // Optimal approach (Using Boyer-Moore Voting Algorithm)
    int candidate = -1, count = 0;
    for(int i = 0; i < n; i++){
        if(count == 0){
            candidate = nums[i];
            count = 1;
        }
        else if(nums[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == candidate){
            count++;
        }
    }
    if(count > majority){
        cout << "The majority element is: " << candidate << endl;
    }
    else{
        cout << "No majority element found." << endl;
    }
    

    return 0;
}