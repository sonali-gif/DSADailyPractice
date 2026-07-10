// A parking lot in a mall has RxC number of parking spaces. 
//Each parking space will either be empty(0) or full(1). 
//The status (0/1) of a parking space is represented as the element of the matrix.
// The task is to find index of the prpeinzta row(R) in the parking lot that has the most of the parking spaces full(1).
// Note: RxC- Size of the matrix
// Elements of the matrix M should be only 0 or 1.
// Example 1:Input:
// 3 -> Value of R(row)
// 3 -> value of C(column)
// [010110111] -> Elements of the array M[R][C] where each element is separated by new line.
// Output:3 -> Row 3 has maximum number of 1's 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int maxone = 0;   // row index
    int maxi = -1;    // maximum number of 1s
    for(int i = 0; i < r; i++) {
        int cnt = 0;
        for(int j = 0; j < c; j++) {
            int x;
            cin >> x;
            if(x == 1)
                cnt++;
        }
        if(cnt > maxi) {
            maxi = cnt;
            maxone = i;
        }
    }
    cout << maxone + 1;

    return 0;
}   