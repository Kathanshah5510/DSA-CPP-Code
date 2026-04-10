// 1st approach:
// Just compare to each element of array using 'if' condition

// #include <bits/stdc++.h>
// using namespace std;

// int findLargest(int arr[], int n){
//     int max = arr[0];
//     for(int i = 1; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int main()
// {    
//     int arr[] = {10,20,30,40,50,11,22,33,44,56,27,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int largest = findLargest(arr, n);
//     cout << "The largest element in the array is: " << largest << endl;

//     return 0;
// }




// 2nd approach:
// Sorting the array and returning the last element as largest element

#include <bits/stdc++.h>
using namespace std;

int sort(int arr[], int n){
    // Bubble Sort
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "The largest element in the array is: " << arr[n-1] << endl;
    return 0;
}

int main()
{
    cout << "Kathan";

    int arr[] = {10,20,30,40,50,11,22,33,44,56,27,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    return 0;
}