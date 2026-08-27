#include<bits/stdc++.h>
using namespace std;
//Optimal aprroach
vector<int> unionArr(vector<int>&arr1,vector<int>&arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0,j=0;
    vector<int> temp;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            if(temp.size()==0 || temp.back()!= arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }else{
            if(temp.size()==0 || temp.back()!= arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        
            if(temp.size()==0 || temp.back()!= arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
    }
    while(j<n2){
            if(temp.size()==0|| temp.back()!= arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
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