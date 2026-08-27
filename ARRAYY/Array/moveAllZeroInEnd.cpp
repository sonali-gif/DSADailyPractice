#include<bits/stdc++.h>
using namespace std;
//brute-force approach
void moveZero(vector<int> &arr,int n){
    vector<int> temp;
    //this loop will add non zero element in temp from arr
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    //this loop will add elements from temp to arr all non zero in front of arr
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    //this loop will add remaining element as zero
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
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