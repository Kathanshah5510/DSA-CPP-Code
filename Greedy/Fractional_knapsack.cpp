#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> wt = {10, 20, 30};
    vector<int> val = {60, 100, 120};
    int W = 50;
    int n = wt.size();

    vector<pair<double, int>> vp;
    for(int i = 0; i < n; i++){
        vp.push_back({(double)val[i]/wt[i], wt[i]});
    }

    sort(vp.rbegin(), vp.rend());
    double finalVal = 0.0;
    
    for(auto it : vp){
        int wtCur = (int)it.second;
        int valCur = (int)(it.first * wtCur);
        if(W - wtCur >= 0){
            W -= wtCur;
            finalVal += valCur;
        }
        else{
            finalVal += it.first * W;
            W = 0;
            break;
        }
    }
    cout << "Maximum value in Knapsack = " << finalVal << endl;

    return 0;
}