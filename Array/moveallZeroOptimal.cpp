#include<bits/stdc++.h>
using namespace std;
//optimal approach
vector <int> moveZero(vector<int> &arr,int n){
    int j=-1;
    //this will find first zero
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return arr ;
    }
    //find non zero elemnt and swap with zero so nonzero ele go in first
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int> arr(n);
    cout<<"element:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZero(arr,n);
    cout<<"array after moving all zero at end :";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}