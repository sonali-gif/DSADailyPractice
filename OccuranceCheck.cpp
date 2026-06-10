#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    int maxFreq = 0;
    int element = -1;

    for(auto it : mpp){
        if(it.second > maxFreq){
            maxFreq = it.second;
            element = it.first;
        }
    }

    cout << "Highest occurring element: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;
}