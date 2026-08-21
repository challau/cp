#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Not a palindrome" << endl;
        return 0;
    }

    int original = n;
    int rev = 0;

    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (original == rev) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}