// An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW).
// A company manager wants to make the production of both types of vehicle according to the given data below:
// 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
// 2nd data, Total number of wheels = W
// The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.
// Example : Input :
// 200  -> Value of V  540   -> Value of W
// Output :  TW =130 FW=70
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(1)
    int v,w;
    cin>>v>>w;
    int FW= (w-2*v)/2;
    int Tw =v-FW;
    cout<<"total num of Four wheel :"<<FW<<endl;
    cout<<"total num of Two wheel :"<<Tw<<endl;
    return 0;
}