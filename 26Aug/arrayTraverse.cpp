//Problem: Given an array of n integers, traverse the array and 
//print all its elements in the same order in which they appear.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //time comp-O(N)
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"printing array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}