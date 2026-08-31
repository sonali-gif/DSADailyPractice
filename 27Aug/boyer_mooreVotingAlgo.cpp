//Majority Element ------Problem:
// Given an array of size n, find the element that appears more than n/2 times.
// You may assume that a majority element always exists.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {

        if (count == 0)
            candidate = arr[i];

        if (arr[i] == candidate)
            count++;
        else
            count--;
    }

    cout << candidate;

    return 0;
}