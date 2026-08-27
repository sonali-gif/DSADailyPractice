#include<bits/stdc++.h>
using namespace std;
//brute force
int findOnce(int arr[],int n){
    for(int i=0;i<n;i++){
      int  num=arr[i],cnt =0;
      for(int j=0;j<n;j++){
        if(arr[j]==num){
            cnt++;
        }
      }
      if(cnt==1){
        return num;
      }
    }
    return -1;
}
int main(){
int n;
    cout<<"enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< "Number tht appears once  "<<findOnce(arr,n);
    
     return 0;
 }