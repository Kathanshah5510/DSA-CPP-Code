#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     string s;
//     cout << "Enter string: ";
//     getline(cin, s);
//     vector<string> words;
//     string current_word;

//     for (char c : s){
//         if (c == ' '){
//             words.push_back(current_word);
//             current_word.clear();
//         }
//         else{
//             current_word += c;
//         }
//     }

//     words.push_back(current_word);

//     for(int i = words.size() - 1; i >= 0; i--){
//         cout << words[i];
//         if (i != 0){
//             cout << " ";
//         }
//     }


//     return 0;
// }


// Leetcode solution
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string current_word;

        for (char c : s){
            if (c == ' '){
                if (!current_word.empty()){
                    words.push_back(current_word);
                    current_word.clear();
                }
            }
            else{
                current_word += c;
            }
        }

        if (!current_word.empty()){
            words.push_back(current_word);
        }

        
        string result;
        for(int i = words.size() - 1; i >= 0; i--){
            result += words[i];
            if (i != 0){
                result += " ";
            }
        }

        return result;
    }
};
int main()
{
    Solution sol;
    string s = "Hello     world";
    // getline(cin, s);
    cout << sol.reverseWords(s) << endl;
    return 0;
}