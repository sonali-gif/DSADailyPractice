//Given an array of integers arr and an integer target, find a pair of elements whose sum is equal to the target.
//If no pair has a sum exactly equal to the target, find the pair whose sum is closest to the target.
#include <bits/stdc++.h>
using namespace std;

void closestPair(int arr[], int n, int target) {
    //best approch -O(n log n)
    sort(arr, arr + n);

    int low = 0;
    int high = n - 1;

    int bestLow = low;
    int bestHigh = high;
    int minDiff = INT_MAX;

    while (low < high) {
        int sum = arr[low] + arr[high];
        int diff = abs(target - sum);
        // Store closest pair
        if (diff < minDiff) {
            minDiff = diff;
            bestLow = low;
            bestHigh = high;
        }
        // Exact target
        if (sum == target) {
            cout << arr[low] << " " << arr[high];
            return;
        }
        // Move pointers
        if (sum < target) {
            low++;
        }
        else {
            high--;
        }
    }

    cout << arr[bestLow] << " " << arr[bestHigh];
}

int main() {

    int n;
    cin >> n;

    int target;
    cin >> target;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    closestPair(arr, n, target);

    return 0;
}