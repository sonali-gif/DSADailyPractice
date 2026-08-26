//Find the frequency of a given element x
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    //time comp-O(N)
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter which element freq: ";
    cin>>x;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}