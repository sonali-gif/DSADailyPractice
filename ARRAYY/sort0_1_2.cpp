//Airport security officials have confiscated several items belonging to passengers at the security checkpoint.
// All the items have been dumped into a huge box (array).
// Each item possesses a certain amount of risk: 0, 1, or 2.
// The risk severity of the items is represented by an array of N integer values.
// The task is to sort the items based on their risk levels in the array. 
//Risk values range from 0 to 2.
// Input Format  First line: an integer N — the number of items.
// Second line: N space-separated integers (each 0, 1, or 2), representing risk levels — element-by-element, one per line depending on the exact I/O format given.
#include<bits/stdc++.h>
using namespace std;
int main(){
    //dutch national flag algorithm
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //time comp-O(n) space-O(1)
    int low=0,mid=0,high=n-1;
    while (mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }else if(v[mid]==1){
            mid++;
        }else{
            swap(v[mid],v[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}