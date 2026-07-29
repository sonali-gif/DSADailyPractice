//At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). 
//The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.
// Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. 
//The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.
// 7  -> Value of N
// [r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
// Output : r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char B[n];
    for(int i=0;i<n;i++){
        cin>>B[i];

        if(i < n - 1) {
            cin.ignore(1, ',');
        }
    }
    map<char,int>freq;
    //count freq
    for(int i=0;i<n;i++){
        freq[B[i]]++;
    }

    for(int i=0;i<n;i++){
        if(freq[B[i]]%2!=0){
            cout<<B[i];
            return 0;
        }
    }
    cout<<"all even";
    return 0;

}