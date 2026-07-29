//. Max Character Count Across Fixed-Size Chunks
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    int maxCount = 0;
    int count = 0;

    for (int i = 0; i < s.length(); i++) {

        if (i % n == 0) {
            maxCount = max(maxCount, count);
            count = 0;
        }

        if (s[i] == 'a') {
            count++;
        }
    }

    // Check the last chunk
    maxCount = max(maxCount, count);

    cout << maxCount;

    return 0;
}


