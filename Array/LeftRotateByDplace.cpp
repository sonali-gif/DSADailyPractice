#include<bits/stdc++.h>
using namespace std;
//brute-force approach
// void leftRotate(int arr[],int n,int d){
//     d=d%n;
//     int temp[d];
//     for(int i=0; i<n;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
//optimal approach
void leftRotate(int arr[], int n, int d) {
    d = d % n;
    // Reverse the first d elements
    // Example: [1,2,3,4,5,6,7] -> [3,2,1,4,5,6,7]
    reverse(arr, arr + d);
    // Reverse the remaining n-d elements
    // Example: [3,2,1,4,5,6,7] -> [3,2,1,7,6,5,4]
    reverse(arr + d, arr + n);
    //Reverse the entire array
    // Example: [3,2,1,7,6,5,4] -> [4,5,6,7,1,2,3]
    reverse(arr, arr + n);
}
int main(){
      int n;
    cout<<"enter size:";
    cin>>n;
    int d;
    cout<<"value of d: ";
    cin>>d;
    int arr[n];
    cout<<"element:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotate(arr,n,d);
    cout<<"array after left rotated by d times:  ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}