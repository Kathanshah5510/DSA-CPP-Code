// ----------------Selection Sort Logic-----------------
// 1st Step: Find the minimum element in the unsorted array
// 2nd Step: Swap the found minimum element with the first element
// 3rd Step: Repeat the above steps for the remaining elements
// Time Complexity: O(n^2) as there are two nested loops.
// Auxiliary Space: O(1)
// Bonus: Selection sort is not a stable sorting algorithm. It changes the relative order of elements with equal keys.

// Implementation of Selection Sort
// 1st Pass: [64, 25, 12, 22, 11] -> [11, 25, 12, 22, 64]
// 2nd Pass: [11, 25, 12, 22, 64] -> [11, 12, 25, 22, 64]
// 3rd Pass: [11, 12, 25, 22, 64] -> [11, 12, 22, 25, 64]
// 4th Pass: [11, 12, 22, 25, 64] -> [11, 12, 22, 25, 64]
// 5th Pass: [11, 12, 22, 25, 64] -> [11, 12, 22, 25, 64]
// Final Sorted Array: [11, 12, 22, 25, 64]

// Characteristics of Selection Sort:
// It is an in-place sorting algorithm, meaning it requires only a constant amount O(1) of additional memory space.
// It is not adaptive, meaning it does not take advantage of existing order in the input array.
// It performs the same number of comparisons regardless of the initial order of elements.
// It is useful for small datasets or when memory space is limited.
// It is inefficient on large lists and generally performs worse than the similar insertion sort.
// It can be useful when the cost of swapping elements is high, as it makes the minimum number of swaps (O(n)).
// It is easy to implement and understand, making it a good choice for educational purposes.
// It can be used for sorting linked lists, although other algorithms like merge sort are generally more efficient for this purpose.



// -----------------GeeksForGeeks-----------------
// #include <bits/stdc++.h>
// using namespace std;

// void selectionSort(vector<int> &arr) {
//     int n = arr.size();

//     for (int i = 0; i < n - 1; ++i) {

//         int min_idx = i;

//         for (int j = i + 1; j < n; ++j) {
//             if (arr[j] < arr[min_idx]) {

//                 min_idx = j; 
//             }
//         }

//         swap(arr[i], arr[min_idx]);
//     }
// }

// void printArray(vector<int> &arr) {
//     for (int &val : arr) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> arr = {64, 25, 12, 22, 11};

//     cout << "Original array: ";
//     printArray(arr); 

//     selectionSort(arr);

//     cout << "Sorted array: ";
//     printArray(arr);

//     return 0;
// }


// -----------------My Code-----------------
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int min_idx = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        // swap(arr[i], arr[min_idx]);
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}


// -----------------Striver-----------------
// #include<bits/stdc++.h>

// using namespace std;
// void selection_sort(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     int mini = i;
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] < arr[mini]) {
//         mini = j;
//       }
//     }
//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i] = temp;
//   }

//   cout << "After selection sort: " << "\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << "\n";

// }
// int main() {
//   int arr[] = {13,46,24,52,20,9};
//   int n = sizeof(arr) / sizeof(arr[0]);
//    cout << "Before selection sort: " << "\n";
//    for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << "\n";
//   selection_sort(arr, n);
//   return 0;
// }