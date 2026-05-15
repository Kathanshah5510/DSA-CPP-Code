#include <bits/stdc++.h>
using namespace std;

int getNumOfBouquets(vector<int> &bloomDay, int mid, int k)
{
    int numOfBouquets = 0, count = 0;
    for(int i = 0; i < bloomDay.size(); i++){
        if (bloomDay[i] <= mid){
            count++;
        }
        else{
            count = 0;
        }

        if(count == k){
            numOfBouquets++;
            count = 0;
        }
    }

    return numOfBouquets;
}

int main(){
    int n, m, k;
    cout << "Enter the number of flowers: ";
    cin >> n;
    cout << "Enter the number of bouquets needed: ";
    cin >> m;
    cout << "Enter the number of flowers per bouquet: ";
    cin >> k;

    vector<int> bloomDay(n);
    cout << "Enter the bloom days for each flower: ";
    for(int i = 0; i < n; i++){
        cin >> bloomDay[i];
    }

    int start = 0, end = 0, minDays = -1;
    for (int day : bloomDay){
        end = max(end, day);
    }

    while (start <= end){
        int mid = (start + end) / 2;

        if (getNumOfBouquets(bloomDay, mid, k) >= m){
            minDays = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout << "Minimum days required: " << minDays << endl;
    return 0;
}