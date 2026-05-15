// CodeForces 900C - Course wishes
// Some what hard to understand.
// The idea is to start from the highest level and keep increasing the levels of the courses until we reach the maximum level. We can do this by iterating through the courses and checking if their initial level is equal to the current level. If it is, we can keep increasing the level of that course until it reaches the maximum level. We also need to keep track of the operations we perform to increase the levels of the courses.

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while(t--) {

        int n, k;
        cout << "Enter the number of courses(n) and the maximum level(k): ";
        cin >> n >> k;

        vector<int> course_lvl(k + 1);
        vector<int> ini_lvl(n + 1);
        cout << "Enter the levels of the courses: ";
        for(int i = 1; i <= k; i++) {
            cin >> course_lvl[i];
        }

        cout << "Enter the initial levels of the courses: ";
        for(int i = 1; i <= n; i++) {
            cin >> ini_lvl[i];
        }

        vector<int> ops;
        for(int level = k; level >= 1; level--) {
            for(int i = 1; i <= n; i++) {
                if(ini_lvl[i] == level) {
                    while(ini_lvl[i] < k + 1) {
                        ops.push_back(i);
                        ini_lvl[i]++;
                    }
                }
            }
        }

        cout << ops.size() << endl;
        for(int i = 0; i < ops.size(); i++) {
            if(i) cout << ' ';
            cout << ops[i];
        }

        cout << endl;
    }

    return 0;
}