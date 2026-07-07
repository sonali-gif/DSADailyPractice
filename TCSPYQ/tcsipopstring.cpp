#include<bits/stdc++.h>
using namespace std;
//taking input for string
int main(){
    string s;
   // cin>>s;// it only take string before space like it take bcs not "bsc hgf" because of space
    getline(cin,s);// it will consider space                        
    cout<<s;
    return 0;
}  
//if i have to take int n string together
int main(){
    int n;
    cin>>n;
    cin.ignore();//it will ignore space
    string s;
    getline(cin,s);
    cout<<n<<" "<<s<<endl;
}