#include <bits/stdc++.h>
using namespace std;


void secondSmallestAndLargest(int arr[], int n){
    sort(arr, arr + n);
    cout << "\nSorted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\nThe second smallest element in the array is: " << arr[1] << endl;

    int largest = arr[n-1], secondlargest = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            secondlargest = arr[i];
            break;
        }
    }
    cout << "The second largest element in the array is: " << secondlargest << endl;
}


int main(){

    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array elements are: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    secondSmallestAndLargest(arr, n);

    return 0;
}
