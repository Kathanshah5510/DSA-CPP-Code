// --------------------Bubble Sort Logic--------------------
// 1st Step: Compare adjacent elements. If the first element is greater than the second element, swap them.
// 2nd Step: Repeat the above step for all elements in the array. This completes one pass and the largest element is moved to its correct position.
// 3rd Step: Repeat the above steps for the remaining elements until the entire array is sorted.
// Time Complexity: O(n^2) as there are two nested loops.
// Auxiliary Space: O(1)
// Bonus: Bubble sort is a stable sorting algorithm. It maintains the relative order of elements with equal keys.

// Implementation of Bubble Sort
// 1st Pass: [64, 25, 12, 22, 11] -> [25, 12, 22, 11, 64]
// 2nd Pass: [25, 12, 22, 11, 64] -> [12, 22, 11, 25, 64]
// 3rd Pass: [12, 22, 11, 25, 64] -> [12, 11, 22, 25, 64]
// 4th Pass: [12, 11, 22, 25, 64] -> [11, 12, 22, 25, 64]
// Final Sorted Array: [11, 12, 22, 25, 64]

// Characteristics of Bubble Sort:
// It is an in-place sorting algorithm, meaning it requires only a constant amount O(1
//) of additional memory space.
// It is a stable sorting algorithm, meaning it maintains the relative order of elements with equal keys.
// It is adaptive, meaning it can take advantage of existing order in the input array. If the array is already sorted, it will complete in O(n) time.
// It is not suitable for large datasets as its average and worst-case time complexity is O(n^2).
// It is easy to implement and understand, making it a good choice for educational purposes.
// It can be used for small datasets or when memory space is limited.
// It is rarely used in practice due to its inefficiency compared to other sorting algorithms like quicksort or mergesort.


// --------------------My Code--------------------
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}



// -----------------GFG Code-----------------
// #include <bits/stdc++.h>
// using namespace std;

// void bubbleSort(vector<int>& arr) {
//     int n = arr.size();
//     bool swapped;
  
//     for (int i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (!swapped)
//             break;
//     }
// }

// // Function to print a vector
// void printVector(const vector<int>& arr) {
//     for (int num : arr)
//         cout << " " << num;
// }

// int main() {
//     vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
//     bubbleSort(arr);
//     cout << "Sorted array: \n";
//     printVector(arr);
//     return 0;
// }


// -----------------Striver-----------------
// #include <bits/stdc++.h>
// using namespace std;

// void bubble_sort(int arr[], int n) {
//     // bubble sort
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = 0; j <= i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     cout << "After Using bubble sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using Bubble Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubble_sort(arr, n);
//     return 0;

// }