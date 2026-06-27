#include<bits/stdc++.h>
using namespace std;
int productsubarry(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       int product=1;
       for(int j=i;j<n;j++){
        product *= arr[j];
        maxi=max(maxi,product);
       }
    }
    return maxi;
}
int main(){
    int n=4;
    int arr[n] ={2,3,-2,4};
    cout<< productsubarry(arr,n);
    return 0;
}