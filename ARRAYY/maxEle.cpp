//Maximum element in array
#include<bits/stdc++.h>
using namespace std;
int maxele(vector<int>v,int n){
    //time comp-O(n),space -O(1)
    int maxele=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>maxele){
            maxele=v[i];
        }
    }
    return maxele;
}
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int>v(n);
    // int arr[n]; can use array also
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxele(v,n);
}