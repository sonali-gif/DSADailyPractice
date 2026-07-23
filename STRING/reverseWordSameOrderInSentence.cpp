//Reverse each word, keep word order same
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int start=0;
    //time comp-O(N)space-O(1)
    for(int i=0;i<=n;i++){
        if(i==n|| s[i]==' '){
            int left=start;
            int right=i-1;
            //reverse current word
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            start=i+1;//move to next word
        }
    }
    cout<<s;
    return 0;
}