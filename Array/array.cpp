#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[n];//defining array

    cout<<"element:"<<" ";
    //assigning value
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<"array:"<<" ";
    //accessing elements
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[2];
}