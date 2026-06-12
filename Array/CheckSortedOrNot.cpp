#include<bits/stdc++.h>
using namespace std;
bool checkSort(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]){

        }else{
            return 0;
        }
        return 1;
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
    cout<<checkSort(arr);
}