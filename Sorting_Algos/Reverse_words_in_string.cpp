#include <bits/stdc++.h>
using namespace std;

// int main(){
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     string word;
//     vector<string> words;
//     while(ss >> word){
//         words.push_back(word);
//     }
//     reverse(words.begin(), words.end());
//     for(int i = 0; i < words.size(); i++){
//         cout << words[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// int main(){
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     reverse(s.begin(), s.end());
//     cout << "Reversed string: " << s << endl;
//     return 0;
// }


int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int n = s.size();
    vector<string> sentence;
    string word = "";

    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            word.push_back(s[i]);
        } else {
            if(word != ""){
                sentence.push_back(word);
                word = "";
            }
        }
    }

    if(word != ""){
        sentence.push_back(word);
    }

    reverse(sentence.begin(), sentence.end());

    for(int i = 0; i < sentence.size(); i++){
        if(i) cout << " ";
        cout << sentence[i];
    }

    return 0;
}