#include <bits/stdc++.h>
using namespace std;

int main() {
    long long K, S;
    cin >> K >> S;

    long long count = 0;

    for (int X = 0; X <= K; X++) {

        for (int Y = 0; Y <= K; Y++) {

            long long Z = S - X - Y;

            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}