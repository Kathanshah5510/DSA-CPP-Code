#include <bits/stdc++.h>
using namespace std;


// Using array
// int main(){
//     int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sortedArr[n] = {0};
//     for(int i = 0; i < n; i++){
//         cout << sortedArr[i] << " ";
        
//     }
//     cout << endl;
//     for(int i = 0; i < n; i++){
//         if(i == 0 || arr[i] != arr[i-1]){
//             sortedArr[i] = arr[i];
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
//     cout << "Initial Sorted array: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Array after removing duplicates: ";
//     for(int i = 0; i < n; i++){
//         if(sortedArr[i] != 0){
//             cout << sortedArr[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }



// Using vector
int main(){
    vector<int> vec = {1, 2, 2, 3, 4, 4, 5, 5, 5};
    vector<int> result;
    cout << "size of original vector: " << vec.size() << endl;

    for(int i = 0; i < vec.size(); i++){
        if(i == 0 || vec[i] != vec[i-1]){
            result.push_back(vec[i]);
        }
    }

    cout << "Vector after removing duplicates: ";
    // for(int i = 0; i < result.size(); i++){
    //     cout << result[i] << " ";
    // }
    // cout << endl;

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}