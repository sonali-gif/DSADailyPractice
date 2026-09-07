#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;

    d=d%n;

    //store 1st d element
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }

    //shift element left
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    //put temp at end
    for(int i=0;i<d;i++){
        arr[n-d-i]=temp[i];
    }

    for(int x:arr){
        cout<<x<<" ";

    }
    return 0;
}