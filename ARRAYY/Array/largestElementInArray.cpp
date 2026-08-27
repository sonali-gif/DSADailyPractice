#include<bits/stdc++.h>
using namespace std;
int LargetsElement(  vector<int> &arr,int n){
    int maxElement =arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    return maxElement;
}
int main(){
    int n;
    cout<<"enter size of arr: ";
    cin>>n;
     vector <int> arr(n);
     cout<<"elements:"<<" ";
     for(int i=0;i<=n-1;i++){
        cin>>arr[i];
     }
     cout<<"largest element: "<<LargetsElement(arr,n);
     return 0;
}