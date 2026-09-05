#include <bits/stdc++.h>
using namespace std;
//sieve of eratosthenes
int main() {
    int l, r;
    cin >> l >> r;
    vector<bool> prime(r + 1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= r; i++) {

        if(prime[i]) {

            for(int j = i * i; j <= r; j += i) {
                prime[j] = false;
            }
        }
    }

    for(int i = l; i <= r; i++) {
        if(prime[i]) {
            cout << i << " ";
        }
    }

    return 0;
}