#include<bits/stdc++.h>
using namespace std;
 int maxConsecutive(int arr[],int n){
    int maxi =0, cnt =0;
    for(int i=0;i<n;i++){
        if (arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }else{
            cnt=0;
        }
    }
    return maxi;
 }
 int main(){
int n;
    cout<<"enter size of array ";
    cin>>n;
    int arr[n-1];
    cout<<"elements: ";
    for (int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<< "Maximun consecutive ones are  "<<maxConsecutive(arr,n);
    
     return 0;
 }