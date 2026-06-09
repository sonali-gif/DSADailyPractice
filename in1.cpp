#include <iostream>
using namespace std;

int main() {
    string s = "Hellor";

    // Initialize two pointers: left at start
    //  and right at the end of the string
    int l = 0;
    int r = s.length() - 1;

    // Loop until the two pointers meet in the middle
    while (l < r) {
      
        // Swap characters at position left and right
        swap(s[l], s[r]);

        // Move the left pointer to right
        l++;

        // Move the right pointer to left
        r--;
    }

    cout << s;
    return 0;
}