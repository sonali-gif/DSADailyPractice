//Smallest and second smallest
#include<bits/stdc++.h>
using namespace std;
int small(int arr[] ,int n){
    int Fsmall=INT_MAX;
    int Ssmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<Fsmall){
            Ssmall=Fsmall;
            Fsmall=arr[i];
        }else if(arr[i]<Ssmall && arr[i]!=Fsmall){
            Ssmall=arr[i];
        }
    }
    cout<<"Smallest: "<<Fsmall<<endl;
    cout<<"2nd Smallest: "<<Ssmall<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    small(arr,n);
    return 0;
}