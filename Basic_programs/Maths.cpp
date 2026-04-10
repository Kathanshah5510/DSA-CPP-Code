#include <bits/stdc++.h>
using namespace std;

// // Count number of digits in an integer
// int main(){
//     cout << "Enter an integer: ";
//     int a, count=0;
//     cin >> a;
//     for(int i=1; i<=10; i++){
//         a = a / 10;
//         count++;
//         if(a==0){
//             break;
//         }
//     }
//     cout << count << endl;
// }

// // Reverse a number
// int main(){
//     cout << "Enter an integer: ";
//     int a, rev=0;
//     cin >> a;
//     while(a>0){
//         int lastdigit = a % 10;
//         rev = rev * 10 + lastdigit;
//         a = a / 10;
//     }
//     cout << rev << endl;
//     return 0;
// }

// // Check palindrome
// int main(){
//     cout << "Enter an integer: ";
//     int a, rev=0, original;
//     cin >> a;
//     original = a;
//     while(a>0){
//         int lastdigit = a % 10;
//         rev = (rev*10) + lastdigit;
//         a = a / 10;
//     }
//     cout << "The original number was: " <<original << endl;
//     cout << "The reversed number is: " <<rev << endl;
//     if(original==rev){
//         cout << "Palindrome" << endl;
//     }
//     else{
//         cout << "Not a palindrome" << endl;
//     }
// }

// // GCD of two numbers
// int main(){
//     cout << "Enter two integers: ";
//     int a, b;
//     cin >> a >> b;
//     while(a != b){
//         if(a > b){
//             a = a - b;
//             cout << a << " " << b << endl;
//         }
//         else{
//             b = b - a;
//             cout << a << " " << b << endl;
//         }
//     }
//     cout << "GCD is: " << a << endl;
//     return 0;
// }

// // Armstrong number
// int main(){
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//     int original = num, n = 0, sum = 0, temp = num;

//     // Counting number of digits
//     while (temp > 0) {
//         n++;
//         temp = temp / 10;
//         cout << "n: " << n << endl;
//         cout << "temp: " <<temp << endl;
//     }
//     temp = num;

//     // Calculating sum
//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += pow(digit, n);
//         cout << "digit: " << digit << endl;
//         cout << "sum: " << sum << endl;
//         temp /= 10;
//     }
//     if (sum == original) {
//         cout << original << " is an Armstrong number." << endl;
//     }
//     else {
//         cout << original << " is not an Armstrong number." << endl;
//     }
// }
    
// // Print all factors of a number
// int main()
// {
//     cout << "Enter an integer: ";
//     int a;
//     cin >> a;
//     cout << 1 << endl;
//     for (int i = 2; i <= (a / 2); i++)
//     {
//         if (a % i == 0)
//         {
//             cout << i << endl;
//         }
//     }
//     cout << a << endl;
// }

// // Sieve of Eratosthenes (Find all prime numbers up to n)
// int main()
// {
//     cout << "Enter an integer: ";
//     int n;
//     cin >> n;
//     vector<bool> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     cout << "Prime numbers up to " << n << " are:" << endl;
//     for (int i = 2; i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// // Prime number check
// int main()
// {
//     cout << "Enter an integer: ";
//     int a, count = 0;
//     cin >> a;

//     if(a <= 1){
//         cout << a << " is not a prime number" << endl;
//     }
//     else{
//         for(int i = 2; i <= (a / 2); i++){
//             if(a % i == 0)
//                 count++;
//             if(count > 0)
//                 break;
//         }
//         if(count == 0){
//             cout << a << " is a prime number" << endl;
//         }
//         else{
//             cout << a << " is not a prime number" << endl;
//         }
//     }
// }