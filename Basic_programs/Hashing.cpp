// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     // // Hashing
//     // int n;
//     // cout << "Enter size of array: ";
//     // cin >> n;
//     // int arr[n];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin >> arr[i];
//     // }

//     // // precompute:
//     // int hash[20] = {0};
//     // for (int i = 0; i < n; i++)
//     // {
//     //     hash[arr[i]] += 1;
//     // }

//     // int q;
//     // cout << "Enter number of queries: ";
//     // cin >> q;
//     // while (q--)
//     // {
//     //     int number;
//     //     cin >> number;
//     //     // fetching:
//     //     cout << hash[number] << endl;
//     // }

//     string s;
//     cout << "Enter string: ";
//     cin >> s;
    


//     // int arr[26] = {0};
//     // for(int i = 0; i < s.size(); i++){
//     //     arr[s[i] - 'a']++;
//     // }

//     // int q;
//     // cin >> q;
//     // while(q--){
//     //     char c;
//     //     cin >> c;
//     //     cout << arr[c - 'a'] << endl;
//     // }


//     // For all characters
//     int arr[256] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         arr[s[i]]++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << arr[c] << endl;
//     }


// }




// #include <bits/stdc++.h>
// using namespace std;

// void countfrequency(int arr[], int n){
//     vector<bool> visited(n, false);
//     int maxFreq = 0, minFreq = INT_MAX;
//     int maxEle = 0, minEle = 0;

//     for(int i = 0; i < n; i++){
//         if(visited[i] == true) continue;

//         int count = 1;
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] == arr[j]){
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         if (count > maxFreq) {
//             maxEle = arr[i];
//             maxFreq = count;
//         }
//         if (count < minFreq) {
//             minEle = arr[i];
//             minFreq = count;
//         }

//         // cout << arr[i] << " " << count << endl;
//         // cout << visited[i] << endl;
//     }
//     cout << "Maximum frequency element is: " << maxEle << " with frequency: " << maxFreq << endl;
//     cout << "Minimum frequency element is: " << minEle << " with frequency: " << minFreq << endl;
// }

// int main(){
//     int arr[] = {10,5,10,15,10,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << "Array is: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Length of array: " << n << endl;
//     cout << "Size of 0th index element: " << sizeof(arr[0]) << endl;
//     cout << "Size of array: " << sizeof(arr) << endl;
//     countfrequency(arr, n);

// }


#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n){
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // for(auto it : mp){
    //     cout << it.first << " " << it.second << endl;
    // }
    for (auto it : mp) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }
    cout << "Maximum frequency element is: " << maxEle << " with frequency: " << maxFreq << endl;
    cout << "Minimum frequency element is: " << minEle << " with frequency: " << minFreq << endl;
}

int main(){
    int arr[] = {10,2,10,40,2,50,2,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
}