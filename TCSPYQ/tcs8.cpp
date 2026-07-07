//At a fun fair, a street vendor is selling different colours of balloons. 
//He sells N number of different colours of balloons (B[]). 
//The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.
//Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. 
//The colours of the balloons can all be either upper case or lower case in the array.
// If all the inputs are even in number, display the message "All are even".
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
// //we can take array as well
//     vector<char>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//    //it will count freq of char
//     unordered_map<char,int>mp;
//     for(char ch:v){
//         mp[ch]++;
//     }
//     bool found =false;
//     //traverse vector
//     for(char ch:v){
//         if(mp[ch]%2!=0){
//             cout<<ch;
//             found=true;
//             break;
//         }
//     }
//     if(!found){
//         cout<<"all even";
//     }
//     //print char with freq ex a-2,b-1 etc
//     // for(auto it:mp){
//     //     cout<<it.first<<" "<<it.second<<endl;
//     // }
//     return 0;
// }
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char ans;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
    return 0;
}
