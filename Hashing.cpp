#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;  
    // n = size of array

    int arr[n];  
    // array to store input numbers

    for(int i = 0; i < n; i++){
        cin >> arr[i];  
        // taking input elements of array
    }

    // PRECOMPUTATION STEP (HASHING)
    int hash[13] = {0};  
    // hash array to store frequency of numbers from 0 to 12

    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;  
        // increase frequency of that number
        // eg- if arr[i] = 3 → hash[3]++
    }

    int q;
    cin >> q;  
    // q = number of queries we want for user to give 

    while(q--){
        int num;
        cin >> num;  
        // number whose frequency we want to find

        // FETCH STEP (O(1) time)
        cout << hash[num] << endl;  
        // directly print frequency from hash array
    }
}