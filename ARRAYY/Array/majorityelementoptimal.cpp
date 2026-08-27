#include<bits/stdc++.h>
using namespace std;
//optimal approch in this we use moore's voting algorithm
int majorityElement(int arr[],int n){
    int cnt = 0;
    int ele = -1;

    for(int i = 0; i < n; i++){
        if(cnt == 0){
            ele = arr[i];
            cnt = 1;
        }
        else if(arr[i] == ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    return ele;
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