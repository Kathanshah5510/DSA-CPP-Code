#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    // * * * * * 
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
}

void pattern2(int n){
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    // * 
    // * *
    // * * *
    // * * * *
    // * * * * *
}

void pattern3(int n){
    
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4
}

void pattern4(int n){
    
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
}

void pattern5(int n){
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
}

void pattern6(int n){
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
}

void pattern7(int n){
    
    for(int i = 0; i < n; i++){
        
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        // star
        for(int j = 0; j < (2*i)+1; j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }

//     *
//    ***
//   *****
//  *******
// *********
}

void pattern8(int n){
    
    for(int i = 0; i < n; i++){

        // space
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        // star
        for(int j = 0; j < (2*n) - (2*i +1); j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
// *********
//  *******
//   *****
//    ***
//     *
}

void pattern10(int n){
    for(int i = 1; i <= 2*n-1; i++){
        int stars = i;
        
        if(i > n){
            stars = 2*n - i;
        }

        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
}

void pattern11(int n){
    for(int i = 0; i < n; i++){
        int start = 1;
        
        if(i % 2 == 0){
            start = 1;
        } else {
            start = 0;
        }

        for(int j = 0; j <= i; j++){
            cout << start << " ";
            start = 1 - start;
        } 

        cout << endl;
    }
// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
}

void pattern12(int n){
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++){

        // numbers
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        // space
        for(int j = 1; j <= space; j++){
            cout << " ";

        }

        // numbers
        for(int j = i; j >= 1; j--){
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
}

void pattern13(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
}

void pattern14(int n){
    // char alpha = 'A';
    for(int i = 0; i < n; i++){
        for(char alpha = 'A'; alpha <= 'A' + i; alpha++){
            cout << alpha << " ";
        }
        cout << endl;
    }
// A 
// A B
// A B C
// A B C D
// A B C D E
}

void pattern15(int n){
    for(int i = 0; i < n; i++){
        for(char alpha = 'A'; alpha <= 'A' + n - i - 1; alpha++){
            cout << alpha << " ";
        }
        cout << endl;
    }
// A B C D E 
// A B C D
// A B C
// A B
// A
}

void pattern16(int n){
    for(int i = 0; i < n; i++){
        char alpha = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << alpha << " ";
        }
        cout << endl;
    }
// A 
// B B
// C C C
// D D D D
// E E E E E
}

void pattern17(int n){
    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }

        //character
        char ch = 'A';
        int breakpoint = (2*i + 1) / 2;
        for(int j = 0; j < (2*i) + 1; j++){
            cout << ch;
            if(j < breakpoint){
                ch++;
            } else {
                ch--;
            }
        }
        
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
}

void pattern18(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'E' - i; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
// E 
// D E
// C D E
// B C D E
// A B C D E
}

void pattern19(int n){
    // upper half
    for(int i = 0; i < n; i++){
        // star
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < 2*i; j++){
            cout << " ";
        }

        // star
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for(int i = 0; i < n; i++){
        // star
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < 2*(n-i-1); j++){
            cout << " ";
        }

        // star
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
}

void pattern20(int n){
    //upper half
    for(int i = 0; i < n; i++){
        // star
        for(int j = 0; j < i; j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < 2*(n-i); j++){
            cout << " ";
        }

        // star
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for(int i = 0; i < n; i++){
        // star
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < 2*i; j++){
            cout << " ";
        }

        // star
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
}

void pattern21(int n){
    // first line
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    // middle part
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // last line 
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern22(int n){
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) - i;
            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4
}

int main(){
    
    int n = 4;
    // cin >> n;
    pattern22(n);

    return 0;
}