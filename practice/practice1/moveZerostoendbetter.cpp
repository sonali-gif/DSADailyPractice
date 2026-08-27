#include<bits/stdc++.h>
using namespace std;
//better approach in this we use temp vector to store non zero element thn add 0 to remanining element
//time comp-O(N) space -O(N)
void movezero(int arr[],int n){
    vector<int>temp;
   for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp.push_back(arr[i]);
    }
   }
   int k=temp.size();
   for(int i=0;i<k;i++){
    arr[i]=temp[i];
   }
   for(int i=k;i<n;i++){
    arr[i]=0;
   }
}
int main(){
    int n=6;
    int arr[n]={1,2,0,7,0,3};
    movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}