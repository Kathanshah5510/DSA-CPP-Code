#include <bits/stdc++.h>
using namespace std;

void print(){
    cout << "Hello World!" << endl;
}

void kathan(){
    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << "Kathan's age is " << age << endl;
}

int sum(long a, long b){
    return a + b;
}

void explainPairs(){
    pair<int, int> p = {1, 3};
    cout << "First number of the pair: " << p.first << endl << "Second number of the pair: " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << "First number of the pair: " << p1.first << endl << "Second 1st half number of the pair: " << p1.second.first << endl << "Second 2nd half number of the pair: " << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;

    
}

void explainVector(){
    vector<int> v; 

    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v[1] << endl;

    // If you want to print the entire vector, use a loop:
    // cout << "Vector elements: ";
    // for (int val : v) {
    //     cout << val << " ";
    // }
    // cout << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);
    cout << vec[0].first << " :First" << " " << vec[0].second << " :Second" << endl;
    cout << vec[1].first << " " << vec[1].second << endl;

    // vector<int> v(5,100);

    // vector<int> v(5);

    vector<int> v1(5,20);

    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";
    
    // vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0) << endl;
    cout << v.back() << endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    


}

int main(){
    // print();
    // kathan();
    long num1 = 5, num2 = 10;
    long ans = sum(num1, num2);
    cout << "Sum is: " << ans << endl;

    // learn about 
    // 1. Algorithms
    // 2. Containers
    // 3. Iterators
    // 4. Functions


    // Containers
    // explainPairs();
    explainVector();
}