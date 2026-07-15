//Mean and median
#include<bits/stdc++.h>
using namespace std;
//Mean = Sum of all values ÷ Number of values
double mean(int arr[],int n){
    //time comp-O(n)
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int ans= sum/n;
    return ans;
}
//Median is the middle value after arranging numbers in increasing order
double median(int arr[],int n){
    //time comp-O(nlogn)
    sort(arr,arr+n);
    int ans;
    if(n%2==1){
         ans=arr[n/2];
    }else {
        ans=(arr[n/2-1]+arr[n/2])/2;
    }
    return  ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"mean: "<<mean(arr,n)<<endl;
    cout<<"median: "<<median(arr,n);
    return 0;
}