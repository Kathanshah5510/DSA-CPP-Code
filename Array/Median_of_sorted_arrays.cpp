#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num1 = {1, 3};
    vector<int> num2 = {2, 4};

    int m = num1.size();
    int n = num2.size();

    vector<int> merged(m + n);
    merge(num1.begin(), num1.end(), num2.begin(), num2.end(), merged.begin());

    cout << "Merged array: ";
    for(int i = 0; i < merged.size(); i++){
        cout << merged[i] << " ";
    }
    cout << endl;

    float median = 0;
    if(merged.size() % 2 == 0){
        median = (merged[merged.size()/2 - 1] + merged[merged.size()/2]) / 2.0;
    } else {
        median = merged[merged.size()/2];
    }
    cout << "Median: " << median << endl;

    return 0;
}