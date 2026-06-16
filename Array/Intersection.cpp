#include<iostream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> ans;
    vector<int> visited(n2, 0);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {

            if (arr1[i] == arr2[j] && visited[j] == 0) {
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }

            if (arr2[j] > arr1[i]) break;
        }
    }

    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 2, 3, 5, 6};

    vector<int> result = intersection(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}