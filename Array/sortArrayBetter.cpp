#include<bits/stdc++.h>
using namespace std;
//better approach which use 3 counter
void sortArray(int n, int arr[]){
    int cnt1 =1 , cnt0 =0, cnt2 =2;
    for (int i=0;i<n;i++){
        if(arr[i]==0){
            cnt0++;
        }else if(arr[i]==1){
            cnt1++;
        }else{
            cnt2++;
        }
    
    }
    for (int i=0;i<cnt0;i++){
            arr[i]=0;
        }
    for (int i=cnt0;i<cnt0+cnt1;i++){
            arr[i]=1;
        }
        for (int i=cnt0+cnt1;i<n;i++){
            arr[i]=2;
        }
}
int main(){
    int n ;
    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortArray(n,arr);
    for (int i=0;i<n;i++){
       cout<<arr[i];
    }
    return 0;
}