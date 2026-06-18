#include<bits/stdc++.h>
using namespace std;
int FindMissingNum(int arr[],int n){
    int XOR1=0, XOR2 =0;
    for(int i=0;i<n-1;i++){
        XOR2=XOR2^ arr[i];
        XOR1 =XOR1 ^ (i+1);

    }
    XOR1 =XOR1^ n;
    return XOR1 ^ XOR2;
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
    cout<< "missing num "<<FindMissingNum(arr,n);
    
     return 0;
 }