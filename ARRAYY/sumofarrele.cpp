//Sum of array elements
#include<bits/stdc++.h>
using namespace std;
//time comp-O(n) space -O(1)
int sumarr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumarr(arr,n);
    return 0;
}