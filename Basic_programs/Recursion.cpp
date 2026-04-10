#include <bits/stdc++.h>
using namespace std;

// First Recursion
void first(int a, int b)
{
    if (a > b)
        return;
    cout << "Hello Kathan: " << a << " time/s" << endl;
    first(a + 1, b);
}

// Second Recursion
void second(int a, int n)
{
    if (a > n)
        return;
    cout << a << " ";
    second(a + 1, n);
}

void third(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    third(n - 1);
}

int fourth(int n)
{
    if (n == 0)
        return 0;
    return n + fourth(n - 1);
}

int fifth(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fifth(n - 1);
}

void sixth(int l, int r, int arr[])
{
    if (l >= r)
        return;
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    sixth(l + 1, r - 1, arr);
}

bool isPalindrome(string s)
{

    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}

int eighth(int fibo)
{
    if (fibo <= 1)
    {
        return fibo;
    }
    int last = eighth(fibo - 1);
    int slast = eighth(fibo - 2);
    return last + slast;
}

int main()
{

    // // First Recursion
    // int n;
    // cout << "Enter an integer: ";
    // cin >> n;
    // first(1, n);

    // // Second Recursion
    // int n;
    // cout << "Enter an integer: ";
    // cin >> n;
    // second(1 , n);

    // // Third Recursion
    // int n;
    // cout << "Enter an integer: ";
    // cin >> n;
    // third(n);

    // // Fourth Recursion
    // int n;
    // cout << "Enter an integer: ";
    // cin >> n;
    // int sum = fourth(n);
    // cout << "Sum is: " << sum << endl;

    // // Fifth Recursion
    // int n;
    // cout << "Enter an integer: ";
    // cin >> n;
    // int fact = fifth(n);
    // cout << "Factorial is: " << fact << endl;

    // // Sixth Recursion
    // int l, r, size, arr[100];
    // cout << "Enter size of array: ";
    // cin >> size;
    // cout << "Enter elements of array: ";
    // for(int i = 0; i < size; i++){
    //     cin >> arr[i];
    // }
    // l = 0;
    // r = size - 1;
    // sixth(l, r, arr);
    // cout << "Reversed array is: ";
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }

    // // Seventh Recursion
    // string str;
    // cout << "Enter a string: ";
    // cin >> str;
    // bool ans = isPalindrome(str);

    // if (ans == true)
    // {
    //     cout << "Palindrome";
    // }
    // else
    // {
    //     cout << "Not Palindrome";
    // }

    // Eighth Recursion
    int n;
    cout << "Enter size of fibonacci series: ";
    cin >> n;
    cout << eighth(n) << endl;


}