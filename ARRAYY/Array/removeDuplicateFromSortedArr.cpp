#include<bits/stdc++.h>
using namespace std;
int removeDup(vector<int> &arr){
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
   cout<< removeDup(arr);
   return 0;
}