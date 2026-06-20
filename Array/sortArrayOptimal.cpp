#include<bits/stdc++.h>
using namespace std;
//optimal approch in whivh we use dutch national flag algo
void sortArray(int n, int arr[]){
    int low =0 , mid =0, high =n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int n ;
    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortArray(n,arr);
    for (int i=0;i<n;i++){
       cout<<arr[i];
    }
    return 0;
}