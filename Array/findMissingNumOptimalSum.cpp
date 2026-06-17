#include<bits/stdc++.h>
using namespace std;
int findMissingNum(int arr[],int n){
    int sum=n*(n+1)/2;
    int s2=0;
    for(int i=0;i<n-1;i++){
        s2 +=arr[i];
    }
            return (sum-s2);

}
int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"elements: ";
    for (int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<< "missing num "<<findMissingNum(arr,n);
    
     return 0;
 
}