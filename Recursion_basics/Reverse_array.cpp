#include <bits/stdc++.h>
using namespace std;

// void reverse(vector<int> &arr, int left, int right){
//     if(left >= right){
//         return;
//     }
//     swap(arr[left], arr[right]);
//     reverse(arr, left + 1, right - 1);
// }

void reverse(vector<int> &arr, int i){
    if(i >= arr.size() / 2){
        return;
    }
    swap(arr[i], arr[arr.size() - i - 1]);
    reverse(arr, i + 1);
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // reverse(arr, 0, n - 1);
    reverse(arr, 0);
    cout << "The reversed array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}