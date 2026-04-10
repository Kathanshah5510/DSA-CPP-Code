#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int left = 0, maxArea = 0;
    int right = height.size() - 1;

    while(left < right){
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;
        maxArea = max(maxArea, area);
        if(height[left] < height[right]){
            left++;
        } else {
            right--;
        }
    }

    cout << "Maximum area: " << maxArea << endl;
    return 0;
}