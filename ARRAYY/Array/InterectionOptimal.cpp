#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int>& arr1, vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> ans;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {

        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 2, 3, 5, 6};

    vector<int> result = intersectionArray(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}