//Missing number in array (1 to N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2=sum2+arr[i];
    }
    cout<<sum1-sum2;
    return 0;

}