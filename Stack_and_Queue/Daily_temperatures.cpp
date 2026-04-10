// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> temperatures = {73,74,75,71,69,72,76,73};
//     vector<int> answer;

//     for(int i = 0; i < temperatures.size(); i++){
//         for(int j = i + 1; j < temperatures.size(); j++){
//             if(temperatures[j] > temperatures[i]){
//                 answer.push_back(j-i);
//                 break;
//             }
//         }
//         if(answer.size() < i + 1){
//             answer.push_back(0);
//         }
//     }

//     for(int i = 0; i < answer.size(); i++){
//         cout << answer[i] << " ";
//     }


//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> temperatures = {73,74,75,71,69,72,76,73};
    stack<int> st;
    vector<int> answer(temperatures.size(),0);

    for(int i = 0; i < temperatures.size(); i++){
        while(!st.empty() && temperatures[i] > temperatures[st.top()]){
            answer[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }   





    return 0;
}