//Replace every element with the greatest element on its right side
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(N) space-O(1)
    int arr[]={6,7,11,4,10,8};
    int n=6;
    int maxright=arr[n-1];
    for(int i=n-2;i>=0;i--){
        int curr=arr[i];
        arr[i]=maxright;
        if(curr>maxright){
            maxright=curr;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}