#include<bits/stdc++.h>
using namespace std;
//brute force in this we check cnt of each elemt n if it is >n/2 we print it
int majorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
           if(arr[i]==arr[j]){
            cnt++;
           } 
        }
        if(cnt>n/2){
            int a= arr[i];
            return a;
        }
    }
    return 0;
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
   cout<< majorityElement(arr,n);
    
    return 0;
}