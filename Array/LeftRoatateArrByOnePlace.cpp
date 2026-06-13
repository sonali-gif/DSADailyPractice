#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector <int> &arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
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
    leftRotate(arr,n);
    cout<<"array after left rotate by one:";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
