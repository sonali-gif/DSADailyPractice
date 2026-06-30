#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> &num ,int n,int target){
    //optimal approach in this we use 2 pointer because arr is sorted n we have to find pair tht return some target
    //time comp-O(N) space somp-O(1)
    int left=0,right=n-1;
    while(left<right){
        int sum=num[left]+num[right];
        if(sum==target){
            return{left+1,right+1};
        }else if(sum>target){
            right--;
        }else{
            left++;
        }
    }
    return{};
}
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int target;
    cout<<"target: ";
    cin>>target;
    vector<int>ans=twosum(num,n,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}