// Rotate array to the left by one position
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> num = {1,2,3,4,5};
//     int temp = num.begin()[0];
//     cout << temp << endl;

//     for(int i = 0; i < num.size()-1; i++){
//         num[i] = num[i+1];
//     }
//     num[num.size()-1] = temp;

//     cout << "After rotation: ";
//     for(int i = 0; i < num.size(); i++){
//         cout << num[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



// Rotate left by k elements
#include <bits/stdc++.h>
using namespace std;

int rotate(vector<int>& arr, int k){
    vector<int> temp(arr.size());
    int n = arr.size();

    for(int i = 0; i < n; i++){
        temp[i] = arr[(i + k) % n];
    }
    arr = temp;
    return 0;
}

int recursiveRotate(vector<int>& arr, int k, int n){
    if(k == 0) return 0;

    int first = arr[0];
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;

    return recursiveRotate(arr, k-1, n);
}


int main(){
    vector<int> num = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    // rotate(num, k);
    recursiveRotate(num, k, num.size());

    cout << "After rotation: ";
    for(int i = 0; i < num.size(); i++){
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}

