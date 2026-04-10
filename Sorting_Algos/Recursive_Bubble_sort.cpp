#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int arr[], int size){
    if (size == 1) return;

    for(int j = 0; j <= size - 2; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    recursiveBubbleSort(arr, size - 1);
} 

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted Array: ";
    printArray(arr, size);
    recursiveBubbleSort(arr, size);
    cout << "Sorted Array: ";
    printArray(arr, size);
    return 0;
}