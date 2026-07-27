//Linear Search
#include<iostream>
using namespace std;
//time comp,space comp-O(n)
int main(){
    int n;
    int k;
    cout<<"enter number to find:";
    cin>>k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<i;
        }
     }
     return 0;
}