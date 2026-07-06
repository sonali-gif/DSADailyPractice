//Joseph is learning digital logic subject which will be for his next semester.
// He usually tries to solve unit assignment problems before the lecture. 
//Today he got one tricky question. 
//The problem statement is “A positive integer has been given as an input. 
//Convert decimal value to binary representation. 
//Toggle all bits of it after the most significant bit including the most significant bit. 
//Print the positive integer value after toggling all bits”.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int bits=0;
    //counting num of bits
    while(temp > 0){
        bits++;
        temp=temp/2;
    }
    //finding mask for it 
    int mask =(1<< bits)-1;
    //xor 
    int ans =n^ mask;
    cout<<ans;
    return 0;
}