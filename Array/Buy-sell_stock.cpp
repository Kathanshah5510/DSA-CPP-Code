// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> prices = {7, 1, 5, 3, 6, 4};
//     // vector<int> prices = {7, 6, 4, 3, 1};

//     int minPrice = INT_MAX;
//     int maxProfit = 0;
//     for (int price : prices) {
//         if (price < minPrice) {
//             minPrice = price;
//         } else if (price - minPrice > maxProfit) {
//             maxProfit = price - minPrice;
//         }
//     }
//     cout << "Maximum Profit: " << maxProfit << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0;
    int minPrice = prices[0];

    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}