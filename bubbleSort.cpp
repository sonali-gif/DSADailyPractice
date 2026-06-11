#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int didswap=0;
        for(int j = 0 ; j <= n-i-2; j++) {
            if(arr[j] > arr[j+1]) {
        swap(arr[i],arr[j+1]);
        didswap=1;
            }
        }
        if(didswap==0){
            break;//for best time complexity O
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
       for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}