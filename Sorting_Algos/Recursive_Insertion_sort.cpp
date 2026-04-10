#include <bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(int arr[], int i, int size){
     if (i == size) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    recursiveInsertionSort(arr, i + 1, size);
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
    cout << "Unsorted Array: ";
    printArray(arr, size);
    recursiveInsertionSort(arr, 0, size);
    cout << "Sorted Array: ";
    printArray(arr, size);
}