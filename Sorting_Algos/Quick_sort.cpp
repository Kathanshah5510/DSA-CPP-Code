// ----------------Quick Sort Logic-----------------
// 1st Step: Choose a pivot element from the array
// 2nd Step: Partition the array such that elements less than the pivot are on the left and elements greater than the pivot are on the right
// 3rd Step: Recursively apply the above steps to the sub-arrays formed by partitioning
// Time Complexity: O(n log n) on average, O(n^2) in the worst case
// Auxilary Space: O(log n) due to recursive stack space

// Implementation of Quick Sort
// 1st Pass: [4, 6, 2, 5, 7, 9, 1, 3] -> [3, 2, 1, 4, 7, 9, 6, 5]
// 2nd Pass: [3, 2, 1] -> [1, 2, 3]
// 3rd Pass: [7, 9, 6, 5] -> [5, 6, 7, 9]
// Finally Sorted Array: [1, 2, 3, 4, 5, 6, 7, 9]

//Characteristics of Quick Sort:
// Efficient and widely used sorting algorithm.
// In-place sorting (requires only a small amount of additional memory).
// Not stable (relative order of equal elements may change).


// -----------------My Code-----------------
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}