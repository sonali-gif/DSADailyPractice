//Largest and second largest
#include<bits/stdc++.h>
using namespace std;
int large(int arr[] ,int n){
    //time comp-O(N) space-O(1)
    int Flarge=INT_MIN;
    int Slarge=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>Flarge){
            Slarge=Flarge;
            Flarge=arr[i];
        }else if(arr[i]>Slarge && arr[i]!=Flarge){
            Slarge=arr[i];
        }
    }
    cout<<"Largest: "<<Flarge<<endl;
    cout<<"2nd Largest: "<<Slarge<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    large(arr,n);
    return 0;
}