//A chocolate factory is packing chocolates into the packets.
// The chocolate packets here represent an array  of N number of integer values.
// The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).
#include<bits/stdc++.h>
using namespace std;
vector<int> movezero(vector<int>arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=movezero(arr);
    for(int x:arr)
        cout<<x<<" ";
        return 0;
    
}