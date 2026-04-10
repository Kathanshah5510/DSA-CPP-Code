// ----------------Insertion Sort Logic-----------------
// 1st Step: Choose the value at 1st index (2nd element in the array) as key
// 2nd Step: Compare the key with the elements on its left and store it in a sorted way
// 3rd Step: Increment the value of key and Repeat the above steps
// Time Complexity: O(n^2)
// Auxilary Space: O(1)

// Implementation of Selection Sort
// 1st Pass: [13, 46, 24, 52, 20, 9] -> [13, 46, 24, 52, 20, 9]
// 2nd Pass: [13, 46, 24, 52, 20, 9] -> [13, 24, 46, 52, 20, 9]
// 3rd Pass: [13, 24, 46, 52, 20, 9] -> [13, 24, 46, 52, 20, 9]
// 4th Pass: [13, 24, 46, 52, 20, 9] -> [13, 20, 24, 46, 52, 9]
// 5th Pass: [13, 20, 24, 46, 52, 9] -> [9, 13, 20, 24, 46, 52]
// Finally Sorted Array: [9, 13, 20, 24, 46, 52]

//Characteristics of Insertion Sort:
// Simple and intuitive sorting algorithm.
// Efficient for small datasets and nearly sorted arrays.
// In-place sorting (requires no extra memory).
// Stable sort (does not change the relative order of equal elements).
// Adaptive: performs better when the array is partially sorted.



// -----------------My Code-----------------
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {13,46,24,52,20,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array: ";
    printArray(arr, size);
    insertionSort(arr, size);
    cout << "Sorted array: ";
    printArray(arr, size);
}



// -----------------Striver-----------------
// #include <bits/stdc++.h>
// using namespace std;

// void insertion_sort(int arr[], int n) {
//     for (int i = 0; i <= n - 1; i++) {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j]) {
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }

//     cout << "After Using insertion sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using insertion Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertion_sort(arr, n);
//     return 0;
// }