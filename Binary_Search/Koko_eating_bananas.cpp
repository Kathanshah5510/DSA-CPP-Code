#include <bits/stdc++.h>
using namespace std;

bool canEat(vector<int> &piles, int h, int speed)
{
    long long hours = 0;
    for (int pile : piles)
    {
        hours += pile / speed + (pile % speed != 0);
    }
    return hours <= h;
}

int main()
{
    int n, h;
    cout << "Enter the number of piles of bananas: ";
    cin >> n;
    cout << "Enter the number of hours available: ";
    cin >> h;
    vector<int> piles(n);
    cout << "Enter the number of bananas in each pile: ";
    for(int i = 0; i < n; i++){
        cin >> piles[i];
    }

    // int n = 5, h = 6;
    // vector<int> piles = {30, 11, 23, 4, 20};
    // int hours = INT_MAX, speed = 0;
    // while (hours > h)
    // {
    //     speed += 1;
    //     hours = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         hours += piles[i] / speed + (piles[i] % speed != 0);
    //     }
    // }
    // cout << "Minimum eating speed (k): " << speed << endl;

    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    int ans = right;
    while (left <= right){
        int mid = left + (right - left) / 2;
        if (canEat(piles, h, mid)){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    cout << "Minimum eating speed (k): " << ans << endl;

    return 0;
}