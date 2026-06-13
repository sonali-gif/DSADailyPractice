#include<bits/stdc++.h>
using namespace std;
//Brute-force aprroach
vector<int> unionArr(vector<int>&arr1,vector<int>&arr2){
    set<int>st;
    for(int i=0;i<arr1.size();i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    cout<<"element for ar1:";
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"element for ar2:";
    for (int i=0;i<n;i++){
        cin>>arr2[i];
    }
   vector<int> a=unionArr(arr1,arr2);
    cout << "Union: ";
    for(int x : a) {
        cout << x << " ";
    }
    return 0;
}