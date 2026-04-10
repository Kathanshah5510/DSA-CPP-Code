#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> finalPrices = {8,4,6,2,3};
    vector<int> result;

    for(int i = 0; i < finalPrices.size(); i++){
        for(int j = i + 1; j < finalPrices.size(); j++){
            if(finalPrices[j] <= finalPrices[i]){
                result.push_back(finalPrices[i] - finalPrices[j]);
                break;
            }
        }
        if(result.size() < i + 1){
            result.push_back(finalPrices[i]);
        }
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}